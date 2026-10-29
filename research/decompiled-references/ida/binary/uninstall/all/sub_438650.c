__int64 __fastcall sub_438650(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v7; // eax
  char v8; // di
  __int64 *v9; // rax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // di
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // ebp
  int v18; // r14d
  _DWORD *v19; // rax
  int *v20; // rdi
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 *v28; // [rsp+8h] [rbp-70h] BYREF
  __int64 *v29; // [rsp+10h] [rbp-68h] BYREF
  char v30; // [rsp+1Fh] [rbp-59h] BYREF
  _BYTE v31[4]; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+24h] [rbp-54h]
  char v33; // [rsp+2Ch] [rbp-4Ch]
  char v34; // [rsp+2Eh] [rbp-4Ah]
  int v35; // [rsp+30h] [rbp-48h]
  int v36; // [rsp+34h] [rbp-44h]
  int v37; // [rsp+38h] [rbp-40h]
  char v38; // [rsp+3Ch] [rbp-3Ch]
  char v39; // [rsp+3Eh] [rbp-3Ah]
  _DWORD *v40; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v41; // [rsp+48h] [rbp-30h]

  if ( a3 <= 1 )
  {
    v23 = sub_47BD00(*(unsigned int *)(a1 + 16));
    sub_48AFD0(a2, v23);
    return 0;
  }
  else
  {
    v7 = strlen(*(const char **)a1);
    sub_434D30(*(unsigned __int8 **)a1, v7, &v30, nullptr);
    v8 = v30 | 0x40;
    v30 |= 0x40u;
    if ( a3 == 2 )
    {
      v18 = 0;
      v29 = (__int64 *)&v40;
      if ( v8 == 88 )
      {
        LOBYTE(v18) = 1;
        v27 = (_DWORD *)sub_47BD00(*(unsigned int *)(a1 + 16));
        ++*v27;
        v41 = v27;
        v40 = *(_DWORD **)(a4 + 8);
      }
      else
      {
        if ( v8 == 69 )
          v19 = (_DWORD *)sub_47B930(1.0);
        else
          v19 = (_DWORD *)sub_47BD00(*(unsigned int *)(a1 + 16));
        v40 = v19;
        ++*v19;
        v41 = *(_DWORD **)(a4 + 8);
      }
      v33 = -124;
      v34 = 1;
      v32 = 1;
      v39 = 0;
      v35 = -3;
      v38 = v30;
      v36 = -3;
      v37 = 0;
      v16 = sub_438030(a2, (__int64)v31, 0, &v29);
      v20 = (&v40)[v18];
      v21 = *v20 - 1;
      v22 = *v20 == 1;
      *v20 = v21;
      if ( v21 < 0 || v22 )
        sub_47B120(v20);
    }
    else
    {
      v9 = (__int64 *)(a4 + 8);
      v10 = a3 - 1;
      v28 = v9;
      v11 = sub_4495F0(a2, 16LL * (a3 - 1));
      *(_BYTE *)(v11 + 12) = -124;
      *(_BYTE *)(v11 + 14) = 1;
      v12 = v11;
      v13 = v30;
      v14 = -3;
      if ( v30 == 88 )
      {
        v25 = a3 - 2;
        if ( a3 - 2 > 0 )
        {
          while ( 1 )
          {
            v26 = 16LL * v25;
            *(_BYTE *)(v26 + v12 + 12) = v13;
            *(_BYTE *)(v26 + v12 + 14) = 0;
            *(_DWORD *)(v26 + v12) = -3;
            *(_DWORD *)(v26 + v12 + 4) = v14;
            if ( v14 >= 0 )
              *(_DWORD *)(16LL * v14 + v12 + 8) = v25;
            v14 = v25--;
            if ( v25 <= 0 )
              break;
            v13 = v30;
          }
        }
      }
      else
      {
        v15 = 1;
        if ( v10 > 1 )
        {
          while ( 1 )
          {
            v24 = 16LL * v15;
            *(_BYTE *)(v24 + v11 + 12) = v13;
            *(_BYTE *)(v24 + v11 + 14) = 0;
            *(_DWORD *)(v24 + v11) = v14;
            if ( v14 >= 0 )
              *(_DWORD *)(16LL * v14 + v11 + 8) = v15;
            v14 = v15;
            *(_DWORD *)(v24 + v11 + 4) = -3;
            if ( v10 <= ++v15 )
              break;
            v13 = v30;
          }
        }
      }
      *(_DWORD *)(v12 + 4) = v14;
      *(_DWORD *)(16LL * v14 + v12 + 8) = 0;
      v16 = sub_438030(a2, v12, 0, &v28);
      sub_449510(a2, v12);
    }
    return v16;
  }
}

