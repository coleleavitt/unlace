__int64 __fastcall sub_1522D90(__int64 a1, _BYTE *a2, signed __int64 a3, int a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int16 v10; // ax
  __int64 *v11; // rdi
  unsigned int *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  bool v15; // zf
  char *v16; // rax
  __int64 v17; // r9
  char *v18; // rax
  char *v19; // rdi
  char *v20; // rcx
  char *v21; // rdx
  __int64 v22; // r8
  char *v23; // rdx
  char *v24; // r8
  int v25; // esi
  int v26; // edx
  __int64 v28; // rsi
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // [rsp+4h] [rbp-F4h]
  int v33; // [rsp+10h] [rbp-E8h]
  char *v34; // [rsp+10h] [rbp-E8h]
  __int64 v35; // [rsp+18h] [rbp-E0h]
  int v36; // [rsp+18h] [rbp-E0h]
  __int64 v37; // [rsp+20h] [rbp-D8h]
  __int64 v38; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  _BYTE v41[48]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int8 *v42[17]; // [rsp+70h] [rbp-88h] BYREF

  v32 = *(_DWORD *)(a1 + 16);
  v8 = sub_1569A00(a1, 22, 2192, a2, a3);
  if ( (_BYTE)v8 )
    return 0;
  v9 = v8;
  v10 = *(_WORD *)(a1 + 32);
  if ( v10 != 14 )
  {
    v11 = *(__int64 **)(a1 + 8);
    if ( v10 == 5 )
    {
      v12 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
      v37 = (__int64)(v12 + 4);
      v38 = *v12;
      sub_14634E0(v11, (int *)(a1 + 16));
      goto LABEL_5;
    }
    v28 = v11[6];
    v29 = 2198;
LABEL_21:
    sub_FC70B0((__int64)v42, v28, a4, v29);
    sub_AEC220(v42, a2, a3);
    sub_AEA040((__int64)v42);
    return v9;
  }
  v30 = sub_14B6F80(a1, 0);
  if ( v30 == 1 )
    return 0;
  v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( ((*(_WORD *)(v31 + 2) >> 6) & 7) != 1 )
  {
    v29 = 2193;
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
    goto LABEL_21;
  }
  v37 = v31 + 4LL * *(unsigned int *)(v31 + 4) + 20;
  v38 = *(unsigned int *)(v31 + 16);
LABEL_5:
  v9 = sub_1569A00(a1, 66, 2188, a2, a3);
  if ( (_BYTE)v9 )
    return 0;
  v13 = 0;
  v14 = 3;
  v15 = *(_WORD *)(a1 + 32) == 5;
  ptr = v41;
  v40 = 0x300000000LL;
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 24);
      if ( v14 > v13 )
      {
        v16 = (char *)ptr + 16 * v13;
        *(_DWORD *)v16 = *(_DWORD *)(a1 + 16);
        *((_QWORD *)v16 + 1) = v17;
        LODWORD(v40) = v40 + 1;
      }
      else
      {
        v35 = *(_QWORD *)(a1 + 24);
        v33 = *(_DWORD *)(a1 + 16);
        v18 = (char *)sub_2237400(&ptr, v41, 0, 16, v42);
        v19 = (char *)ptr;
        v20 = v18;
        v21 = &v18[16 * (unsigned int)v40];
        *(_DWORD *)v21 = v33;
        v22 = (unsigned int)v40;
        *((_QWORD *)v21 + 1) = v35;
        v23 = v19;
        v24 = &v19[16 * v22];
        if ( v19 != v24 )
        {
          do
          {
            v25 = *(_DWORD *)v23;
            v23 += 16;
            v20 += 16;
            *((_DWORD *)v20 - 4) = v25;
            *((_QWORD *)v20 - 1) = *((_QWORD *)v23 - 1);
          }
          while ( v24 != v23 );
        }
        v26 = (int)v42[0];
        if ( v19 != v41 )
        {
          v36 = (int)v42[0];
          v34 = v18;
          free(v19);
          v26 = v36;
          v18 = v34;
        }
        ptr = v18;
        HIDWORD(v40) = v26;
        LODWORD(v40) = v40 + 1;
      }
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) != 66 )
        break;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) != 5 )
        goto LABEL_22;
      v13 = v40;
      v14 = HIDWORD(v40);
    }
    if ( !(unsigned __int8)sub_1569A00(a1, 23, 2196, a2, a3) && !(unsigned __int8)sub_1569A00(a1, 1, 2202, a2, a3) )
    {
      v9 = 1;
      sub_166BFA0(*(_QWORD *)(a1 + 96), v32, v37, v38, &ptr);
    }
  }
  else
  {
LABEL_22:
    sub_FC70B0((__int64)v42, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), *(_DWORD *)(a1 + 16), 2189);
    sub_AEC220(v42, a2, a3);
    sub_AEA040((__int64)v42);
  }
  if ( ptr != v41 )
    free(ptr);
  return v9;
}
