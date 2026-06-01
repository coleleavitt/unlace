__int64 __fastcall sub_17A2AF0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  unsigned __int64 *v18; // r9
  __int64 v19; // rax
  _QWORD *i; // r15
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // [rsp+8h] [rbp-140h]
  unsigned __int64 *v24; // [rsp+10h] [rbp-138h]
  unsigned __int64 v25; // [rsp+18h] [rbp-130h]
  char v26; // [rsp+28h] [rbp-120h] BYREF
  __int128 v27; // [rsp+30h] [rbp-118h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-108h]
  __int128 v29; // [rsp+50h] [rbp-F8h]
  __int64 v30; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE *v31; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-D8h]
  _BYTE v33[64]; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-90h]
  __int64 v35; // [rsp+C8h] [rbp-80h]
  __int64 v36; // [rsp+D0h] [rbp-78h]
  __int64 v37; // [rsp+D8h] [rbp-70h]
  int v38; // [rsp+E0h] [rbp-68h]
  __int64 v39; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v40; // [rsp+F0h] [rbp-58h]
  __int64 v41; // [rsp+100h] [rbp-48h]

  v4 = (_QWORD *)(a3 + 80);
  if ( (*(_WORD *)a3 & 0x1FF) == 0x18 )
    v4 = (_QWORD *)(a3 + 64);
  v7 = *(_QWORD *)((*v4 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)v8;
  v9 = *(_BYTE *)(v8 + 8) & 0x7F;
  if ( v9 == 62 )
    v9 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
  v10 = a3;
  if ( ((v9 + 70) & 0x7Fu) <= 3 )
  {
    v12 = *(_QWORD *)(a3 + 48);
    v13 = *(_QWORD *)(a3 + 40);
    v27 = 0;
    *(_OWORD *)ptr = 0;
    v29 = 0;
    sub_15AB8B0((__int64)&v27, v13, v12);
    v14 = *(_DWORD *)(a3 + 24);
    v15 = *(_QWORD *)(a3 + 16);
    v32 = 0x800000000LL;
    v34 = 0;
    v37 = v15;
    v38 = v14;
    v30 = 0;
    v31 = v33;
    v35 = 0;
    v36 = a1;
    sub_B85890(&v39, v15);
    v41 = 0x101010000LL;
    v40 = 0;
    sub_1A395A0(&v30);
    v16 = (_QWORD *)(a3 + 80);
    *((_QWORD *)&v34 + 1) = *(_QWORD *)(a3 + 56);
    if ( (*(_WORD *)a3 & 0x1FF) == 0x18 )
      v16 = (_QWORD *)(a3 + 64);
    v17 = &v16[*(unsigned int *)(a3 + 4)];
    if ( v17 != v16 )
    {
      v18 = (unsigned __int64 *)&v26;
      v19 = (unsigned int)v32;
      for ( i = v16 + 1; ; ++i )
      {
        v21 = HIDWORD(v32);
        v22 = *v16 & 0xFFFFFFFFFFFFFFFBLL;
        *v18 = v22;
        if ( v19 + 1 <= v21 )
        {
          *(_QWORD *)&v31[8 * v19] = v22;
          LODWORD(v30) = 2;
          v19 = (unsigned int)(v32 + 1);
          LODWORD(v32) = v32 + 1;
          if ( v17 == i )
            break;
        }
        else
        {
          v25 = v22;
          v24 = v18;
          v23 = v17;
          sub_2237220(&v31, v33, v19 + 1, 8);
          v17 = v23;
          v18 = v24;
          *(_QWORD *)&v31[8 * (unsigned int)v32] = v25;
          LODWORD(v30) = 2;
          v19 = (unsigned int)(v32 + 1);
          LODWORD(v32) = v32 + 1;
          if ( v23 == i )
            break;
        }
        v16 = i;
      }
    }
    sub_1A43500(&v30);
    v10 = sub_19CC8A0(a1, &v27, 0, &v30, 0, a2);
    sub_169D230((__int64)&v30);
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
  }
  return v10;
}
