void __fastcall sub_15047B0(unsigned __int16 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  __int16 v7; // ax
  unsigned __int8 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r12
  void *v19; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]

  while ( 1 )
  {
    do
    {
      v3 = *a2;
      vars0 = 0x1C1004200170019LL;
    }
    while ( !(unsigned __int8)sub_15680D0(v3, &vars0, 4, 2) );
    v4 = *a2;
    v5 = *a1;
    v6 = *(_WORD *)(*a2 + 88);
    if ( *(_WORD *)(*a2 + 32) == 23 )
    {
      if ( v5 <= v6 )
        break;
      if ( !v6 )
        goto LABEL_11;
      v11 = *(_DWORD *)(v4 + 2792);
      if ( !v11 )
      {
LABEL_20:
        *(_WORD *)(v4 + 88) = v6 - 1;
LABEL_11:
        *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
        sub_14634E0(*(__int64 **)(v4 + 8), (int *)(v4 + 16));
        v4 = *a2;
        v5 = *a1;
        v6 = *(_WORD *)(*a2 + 88);
        goto LABEL_3;
      }
      v12 = *(_QWORD *)(v4 + 2784) + 24LL * v11 - 24;
      while ( 1 )
      {
        if ( *(_WORD *)(v12 + 14) == v6 )
        {
          if ( *(_DWORD *)(v12 + 16) == *(_DWORD *)(v4 + 90) )
            goto LABEL_15;
        }
        else if ( *(_WORD *)(v12 + 14) < v6 )
        {
          goto LABEL_15;
        }
        if ( *(_WORD *)(v4 + 90) <= *(_WORD *)(v12 + 16) && *(_WORD *)(v4 + 92) <= *(_WORD *)(v12 + 18) )
          goto LABEL_20;
LABEL_15:
        --v11;
        v12 -= 24;
        *(_DWORD *)(v4 + 2792) = v11;
        if ( !v11 )
          goto LABEL_20;
      }
    }
LABEL_3:
    if ( v5 <= v6 )
      break;
    v7 = *(_WORD *)(v4 + 32);
    if ( v7 != 23 && v7 != 66 )
      break;
    sub_1504200(v4);
  }
  sub_1564820(&vars0, v4, *(unsigned int *)(v4 + 16), 2044);
  v8 = (unsigned __int8 *)vars0;
  if ( !vars0 )
  {
    v13 = vars8;
    v14 = *(_DWORD *)(vars8 + 14976);
    if ( v14 )
    {
      v15 = (unsigned int)(v14 - 1);
      *(_DWORD *)(vars8 + 14976) = v15;
      v8 = *(unsigned __int8 **)(v13 + 8 * v15 + 14848);
      v16 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v17 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v18 = v17 + (v16 << 6);
      while ( v17 != v18 )
      {
        while ( 1 )
        {
          v18 -= 64;
          v19 = *(void **)(v18 + 24);
          if ( v19 == (void *)(v18 + 40) )
            break;
          operator delete(v19);
          if ( v17 == v18 )
            goto LABEL_28;
        }
      }
LABEL_28:
      *((_DWORD *)v8 + 134) = 0;
    }
    else
    {
      v8 = (unsigned __int8 *)operator new(0x3A0u);
      *v8 = 0;
      *((_QWORD *)v8 + 12) = v8 + 112;
      *((_QWORD *)v8 + 16) = v8 + 144;
      *((_QWORD *)v8 + 20) = v8 + 176;
      *((_QWORD *)v8 + 24) = v8 + 208;
      *((_QWORD *)v8 + 28) = v8 + 240;
      *((_QWORD *)v8 + 32) = v8 + 272;
      *((_QWORD *)v8 + 36) = v8 + 304;
      *((_QWORD *)v8 + 40) = v8 + 336;
      *((_QWORD *)v8 + 44) = v8 + 368;
      *((_QWORD *)v8 + 48) = v8 + 400;
      *((_QWORD *)v8 + 52) = v8 + 432;
      *((_QWORD *)v8 + 13) = 0;
      v8[112] = 0;
      *((_QWORD *)v8 + 17) = 0;
      v8[144] = 0;
      *((_QWORD *)v8 + 21) = 0;
      v8[176] = 0;
      *((_QWORD *)v8 + 25) = 0;
      v8[208] = 0;
      *((_QWORD *)v8 + 29) = 0;
      v8[240] = 0;
      *((_QWORD *)v8 + 33) = 0;
      v8[272] = 0;
      *((_QWORD *)v8 + 37) = 0;
      v8[304] = 0;
      *((_QWORD *)v8 + 41) = 0;
      v8[336] = 0;
      *((_QWORD *)v8 + 45) = 0;
      v8[368] = 0;
      *((_QWORD *)v8 + 49) = 0;
      v8[400] = 0;
      *((_QWORD *)v8 + 53) = 0x800000000LL;
      *((_QWORD *)v8 + 66) = v8 + 544;
      *((_QWORD *)v8 + 67) = 0x600000000LL;
    }
    vars0 = (__int64)v8;
  }
  v8[*v8 + 1] = 2;
  v9 = vars0;
  v10 = *(unsigned __int8 *)vars0;
  *(_BYTE *)vars0 = v10 + 1;
  *(_QWORD *)(v9 + 8 * v10 + 16) = 1;
  sub_AEA040((__int64)&vars0);
}
