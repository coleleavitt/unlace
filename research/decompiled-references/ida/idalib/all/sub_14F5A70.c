__int64 __fastcall sub_14F5A70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        _DWORD *a6,
        __int64 a7,
        unsigned __int8 a8)
{
  int *v10; // r12
  bool v12; // zf
  unsigned int v13; // eax
  unsigned __int16 v14; // r15
  char v15; // al
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 *v22; // rdi
  unsigned int v23; // r15d
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rsi
  unsigned __int64 v29; // r8
  unsigned __int64 *v30; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v34; // [rsp+28h] [rbp-E0h]
  __int16 v35; // [rsp+3Eh] [rbp-CAh] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  _BYTE v38[184]; // [rsp+50h] [rbp-B8h] BYREF

  v10 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v12 = *(_WORD *)(a1 + 32) == 3;
  *a6 = *(_DWORD *)(a1 + 40);
  ptr = v38;
  v37 = 0x800000000LL;
  if ( v12 )
  {
LABEL_17:
    v26 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v26 + 760) )
    {
      *(_BYTE *)(v26 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v26 + 48) + 6LL) = 1;
    }
    v27 = *(_QWORD *)(a1 + 96);
    v28 = ptr;
    v23 = 1;
    *(_WORD *)(a1 + 32) = 1;
    sub_1717260(*(_QWORD *)(v27 + 656), v28, (unsigned int)v37);
  }
  else
  {
    while ( 1 )
    {
      v13 = sub_15648A0(a1);
      if ( (_BYTE)v13 )
      {
        v23 = v13;
        v35 = 52;
        sub_15680D0(a1, &v35, 1, 1);
        goto LABEL_13;
      }
      v14 = *(_WORD *)(a1 + 32);
      v15 = sub_141A630(v14);
      if ( v14 == 1 || v15 )
        v16 = 0;
      else
        v16 = *(_QWORD *)(a1 + 24);
      v17 = (unsigned int)v37;
      v18 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v37 >= (unsigned __int64)HIDWORD(v37) )
      {
        v29 = v18 | v33 & 0xFFFFFFFF00000000LL;
        v33 = v29;
        if ( HIDWORD(v37) < (unsigned __int64)(unsigned int)v37 + 1 )
        {
          v34 = v29;
          sub_2237220(&ptr, v38, (unsigned int)v37 + 1LL, 16);
          v17 = (unsigned int)v37;
          v29 = v34;
        }
        v30 = (unsigned __int64 *)((char *)ptr + 16 * v17);
        *v30 = v29;
        v30[1] = v16;
        LODWORD(v37) = v37 + 1;
      }
      else
      {
        v19 = (char *)ptr + 16 * (unsigned int)v37;
        *(_DWORD *)v19 = v18;
        *((_QWORD *)v19 + 1) = v16;
        LODWORD(v37) = v37 + 1;
      }
      v20 = *(unsigned int *)(a3 + 8);
      v21 = *(_DWORD *)(a1 + 16);
      if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v20 + 1, 4);
        v20 = *(unsigned int *)(a3 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4 * v20) = v21;
      ++*(_DWORD *)(a3 + 8);
      v22 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v22, v10);
      if ( *(_WORD *)(a1 + 32) != 66 )
        break;
      v25 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v25, v10);
      if ( *(_WORD *)(a1 + 32) == 3 )
        goto LABEL_17;
    }
    v23 = sub_1553D50(a1, (unsigned int)*a6, a7, a8, 0);
    if ( !(_BYTE)v23 )
      sub_18A5DC0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a4, a5, ptr, (unsigned int)v37, a2);
  }
LABEL_13:
  if ( ptr != v38 )
    free(ptr);
  return v23;
}
