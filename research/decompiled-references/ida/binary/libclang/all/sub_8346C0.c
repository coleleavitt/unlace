void __fastcall sub_8346C0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  char v6; // dl
  _BYTE *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rbp
  __int64 v13; // rax
  void **v14; // r13
  __int64 v15; // rax
  void *v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rbp
  char v22; // al
  __int64 v23; // rbx
  bool v24; // cc
  __int64 *v25; // rbp
  __int64 *v26; // rbx
  __int64 v27; // rsi
  void *v28; // rcx
  void *v29; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-60h]
  char v31; // [rsp+Ch] [rbp-5Ch]
  void *v32; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-50h]
  char v34; // [rsp+1Ch] [rbp-4Ch]
  void *v35; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v36; // [rsp+28h] [rbp-40h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) != 14 )
    v4 = sub_B0D320(v4);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = sub_B080B0(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = (_BYTE *)a1[1];
  if ( v6 )
  {
    *v7 = 0;
    v8 = *(_QWORD **)(*a1 + 16LL);
    v9 = sub_6BF060(v8, v5);
    v11 = sub_2575D20(v8, v5, v10);
    v12 = (void *)v11;
    if ( v9 == v11 )
    {
      sub_257CE40(&v35, v11, 0);
      if ( v35 != v12 )
        goto LABEL_6;
    }
    else
    {
      sub_2579AA0(&v35, v9, 0);
      if ( v35 != v12 )
      {
LABEL_6:
        sub_25795C0(&v35, 0);
        goto LABEL_7;
      }
    }
    sub_257D590(&v35, 0);
LABEL_7:
    v13 = a1[1];
    v14 = (void **)(v13 + 40);
    if ( *(void **)(v13 + 40) == v12 )
    {
      if ( v35 == v12 )
      {
        sub_257D030(v13 + 40, &v35);
        v15 = a1[1];
        v16 = v35;
        goto LABEL_10;
      }
      if ( v14 == &v35 )
      {
        v17 = (__int64 *)(v13 + 64);
        if ( v12 != *(void **)(v13 + 64) )
          goto LABEL_12;
        goto LABEL_35;
      }
    }
    else
    {
      if ( v35 != v12 )
      {
        sub_2576220(v13 + 40, &v35);
        v15 = a1[1];
        v16 = v35;
        goto LABEL_10;
      }
      if ( v14 == &v35 )
      {
        v17 = (__int64 *)(v13 + 64);
        if ( v12 != *(void **)(v13 + 64) )
        {
LABEL_46:
          if ( v17 == (__int64 *)&v35 )
          {
LABEL_40:
            v25 = v36;
            if ( v36 )
            {
              v26 = &v36[3 * *(v36 - 1)];
              if ( v36 == v26 )
              {
                v27 = 0;
              }
              else
              {
                do
                {
                  v26 -= 3;
                  sub_5FF3B0(v26);
                }
                while ( v25 != v26 );
                v27 = 24 * *(v25 - 1);
              }
              operator delete[](v25 - 1, v27 + 8);
            }
            return;
          }
          goto LABEL_47;
        }
        goto LABEL_55;
      }
    }
    sub_5FF3B0((__int64 *)(v13 + 40));
    if ( v12 != v35 )
    {
      sub_25768A0(v14, &v35);
      v16 = v35;
      v17 = (__int64 *)(a1[1] + 64LL);
      if ( (void *)*v17 != v12 )
      {
LABEL_11:
        if ( v12 != v16 )
        {
LABEL_12:
          sub_2576220(v17, &v35);
          goto LABEL_13;
        }
        goto LABEL_46;
      }
LABEL_34:
      if ( v12 != v16 )
      {
LABEL_35:
        if ( v17 == (__int64 *)&v35 )
          goto LABEL_14;
LABEL_47:
        sub_5FF3B0(v17);
        if ( v12 == v35 )
          sub_257CF50(v17, &v35);
        else
          sub_25768A0(v17, &v35);
LABEL_13:
        if ( v35 != v12 )
        {
LABEL_14:
          sub_25769A0(&v35);
          return;
        }
        goto LABEL_40;
      }
LABEL_55:
      sub_257D030(v17, &v35);
      goto LABEL_13;
    }
    sub_257CF50(v14, &v35);
    v15 = a1[1];
    v16 = v35;
LABEL_10:
    v17 = (__int64 *)(v15 + 64);
    if ( *(void **)(v15 + 64) != v12 )
      goto LABEL_11;
    goto LABEL_34;
  }
  *v7 = 1;
  v18 = *(_QWORD *)(*a1 + 16LL);
  v19 = sub_B10310(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  v33 = 64;
  v32 = nullptr;
  v34 = v19 ^ 1;
  v20 = (unsigned int)sub_70B280(v18, v5);
  if ( (_DWORD)v20 == 64 )
  {
    v30 = 64;
    v31 = v34;
    v29 = v32;
  }
  else
  {
    if ( v34 )
    {
      sub_2587E20(&v35, &v32, v20);
      v31 = 1;
    }
    else
    {
      sub_2587E80(&v35, &v32, v20);
      v31 = 0;
    }
    v30 = (unsigned int)v36;
    v29 = v35;
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  v21 = a1[1];
  if ( *(_DWORD *)(v21 + 16) <= 0x40u && v30 <= 0x40 )
  {
    *(_QWORD *)(v21 + 8) = v29;
    *(_DWORD *)(v21 + 16) = v30;
  }
  else
  {
    sub_2585EA0(v21 + 8, &v29);
  }
  v22 = v31;
  *(_BYTE *)(v21 + 20) = v31;
  v23 = a1[1];
  if ( *(_DWORD *)(v23 + 32) <= 0x40u && v30 <= 0x40 )
  {
    v28 = v29;
    *(_DWORD *)(v23 + 32) = v30;
    *(_BYTE *)(v23 + 36) = v22;
    *(_QWORD *)(v23 + 24) = v28;
  }
  else
  {
    sub_2585EA0(v23 + 24, &v29);
    v24 = v30 <= 0x40;
    *(_BYTE *)(v23 + 36) = v31;
    if ( !v24 && v29 )
      operator delete[](v29);
  }
}

