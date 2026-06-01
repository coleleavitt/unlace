__int64 __fastcall sub_3D4780(__int64 *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v4; // rax
  __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // r12
  _DWORD *v13; // rax
  char v14; // al
  void *v15; // r15
  __int64 v16; // rbp
  _DWORD *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  void *v24; // r12
  _QWORD *v25; // [rsp+0h] [rbp-78h]
  char v26; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h]

  v4 = *(_DWORD **)(a2 + 24);
  if ( v4 )
  {
    if ( *v4 == 5 )
    {
      v10 = v4[1];
      if ( v10 == 2 )
      {
        v16 = a3[1];
        v17 = *(_DWORD **)(sub_15D1F10(*a3) + 24);
        if ( v17 && *v17 == 5 && v17[1] == 1 && (unsigned __int8)sub_3DB3F0(a1 + 1, v16) )
        {
          v18 = *a1;
          sub_3DB4B0(a1);
          sub_15E1B70(a1[1]);
          v9 = sub_15E1A70(v18);
          if ( !v9 )
            goto LABEL_13;
          goto LABEL_12;
        }
      }
      else if ( v10 == 3 )
      {
        v12 = a3[1];
        v13 = *(_DWORD **)(sub_15D1F10(*a3) + 24);
        if ( v13 )
        {
          if ( *v13 == 5 && v13[1] == 1 )
          {
            v27 = 0;
            v25 = a1 + 1;
            v28 = 0;
            v29 = 1;
            v30 = 0;
            v14 = sub_1666AE0(a1 + 1, v12, &v27, &v26);
            v15 = qword_1C7F2C0;
            if ( v14 && (v27 & 0x100000000LL) == 0 && (_DWORD)v27 == 1 && (v29 & 0x100000000LL) == 0 && (_DWORD)v29 == 1 )
            {
              sub_182CBA0(qword_1C7F2C0, &v27);
              sub_182CBA0(v15, &v29);
              v27 = 0;
              v28 = 0;
              v19 = *a1;
              v29 = 1;
              v30 = 0;
              sub_182CBA0(qword_1C7F2C0, &v29);
              v23 = a1[2];
              BYTE4(v29) &= ~1u;
              LODWORD(v29) = 1;
              if ( !v23 )
              {
                sub_16669E0(v25);
                v23 = a1[2];
              }
              sub_166A700(v23, (unsigned int)&v27, 1, v20, v21, v22);
              v24 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v27);
              sub_182CBA0(v24, &v29);
              sub_15E1B70(a1[1]);
              v9 = sub_15E1A70(v19);
              if ( !v9 )
                goto LABEL_13;
              goto LABEL_12;
            }
            sub_182CBA0(qword_1C7F2C0, &v27);
            sub_182CBA0(v15, &v29);
          }
        }
      }
    }
    else if ( !*v4 && v4[1] == 8 )
    {
      v7 = *a3;
      if ( !*(_WORD *)(*a3 + 4LL) )
      {
        v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
        if ( v8 )
        {
          if ( !*v8 && v8[1] == 8 && *(_DWORD *)(v7 + 24) == 1 )
          {
            v9 = *(_QWORD *)(v7 + 32);
            if ( !v9 )
            {
LABEL_13:
              sub_3D2CD0(*a4, a4[1]);
              *a4 = v9;
              return 4;
            }
LABEL_12:
            ++*(_DWORD *)(v9 + 8);
            goto LABEL_13;
          }
        }
      }
    }
    return 5;
  }
  return 5;
}

