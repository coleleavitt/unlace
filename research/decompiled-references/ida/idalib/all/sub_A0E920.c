__int64 __fastcall sub_A0E920(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  int v6; // r12d
  unsigned int v7; // r15d
  void *v8; // rax
  bool v9; // zf
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  unsigned __int8 v14; // [rsp+36h] [rbp-92h]
  unsigned __int8 v15; // [rsp+37h] [rbp-91h]
  __int64 v16; // [rsp+38h] [rbp-90h] BYREF
  void *v17; // [rsp+40h] [rbp-88h] BYREF
  char v18; // [rsp+48h] [rbp-80h]
  _BYTE *v19; // [rsp+50h] [rbp-78h] BYREF
  __int64 v20; // [rsp+58h] [rbp-70h]
  void *v21; // [rsp+60h] [rbp-68h] BYREF
  char v22; // [rsp+68h] [rbp-60h]
  void *v23; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+78h] [rbp-50h]
  _BYTE v25[72]; // [rsp+80h] [rbp-48h] BYREF

  sub_202A150(&v23, a2, 8, 0);
  if ( v23 )
  {
    v4 = 1;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  else
  {
    sub_A0B660((__int64)&v17, a2);
    if ( (v18 & 1) == 0 )
    {
      if ( (unsigned int)v17 < 2 )
      {
LABEL_40:
        v4 = 1;
        goto LABEL_20;
      }
      v15 = v18 & 1;
      v6 = (int)v17;
      v7 = HIDWORD(v17);
      v14 = 0;
      while ( 1 )
      {
        switch ( v6 )
        {
          case 2:
            sub_A0BAF0((__int64 *)&v23, a2);
            if ( v23 )
            {
              v4 = 1;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
              goto LABEL_20;
            }
            sub_A0B660((__int64)&v23, a2);
            sub_A0B050((__int64)&v17, (__int64 *)&v23);
            sub_A0B030((__int64 *)&v23);
            if ( (v18 & 1) != 0 )
            {
              v10 = v17;
              v4 = v15;
              v17 = nullptr;
              v23 = v10;
              sub_A0E8E0((_QWORD **)&v23);
              if ( v23 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
              goto LABEL_20;
            }
            v6 = (int)v17;
            v7 = HIDWORD(v17);
            break;
          case 1:
            v4 = v14 ^ 1;
            goto LABEL_20;
          case 0:
            goto LABEL_40;
          default:
            a3[2] = 0;
            v19 = nullptr;
            v20 = 0;
            sub_2027F10(&v21, a2, v7, a3, &v19);
            if ( (v22 & 1) != 0 )
            {
              v12 = v21;
              v4 = v15;
              v21 = nullptr;
              v23 = v12;
              sub_A0E8E0((_QWORD **)&v23);
              if ( v23 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
              goto LABEL_44;
            }
            switch ( (_DWORD)v21 )
            {
              case 2:
                v23 = v25;
                if ( v19 )
                {
                  sub_A09A40(&v23, v19, (__int64)&v19[v20]);
                }
                else
                {
                  v24 = 0;
                  v25[0] = 0;
                }
                sub_A0AAD0(a1 + 24, &v23);
                if ( v23 != v25 )
                  operator delete(v23);
                break;
              case 4:
                v9 = *(_BYTE *)(a1 + 72) == 0;
                v16 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
                *(__m128 *)(a1 + 56) = _mm_loadh_ps((const double *)&v16);
                if ( v9 )
                  *(_BYTE *)(a1 + 72) = 1;
                break;
              case 1:
                if ( v14 )
                {
                  v4 = v14;
                  goto LABEL_44;
                }
                if ( **(_QWORD **)a3 || *(_QWORD *)(*(_QWORD *)a3 + 8LL) != 35 )
                {
                  v4 = 1;
LABEL_44:
                  sub_A0AE90((__int64 *)&v21);
                  goto LABEL_20;
                }
                v14 = 1;
                break;
            }
            sub_A0B660((__int64)&v23, a2);
            sub_A0B030((__int64 *)&v17);
            v18 = v24 & 1 | v18 & 0xFE;
            v8 = v23;
            if ( (v24 & 1) != 0 )
              v23 = nullptr;
            v17 = v8;
            sub_A0B030((__int64 *)&v23);
            if ( (v18 & 1) != 0 )
            {
              v13 = v17;
              v17 = nullptr;
              v23 = v13;
              sub_A0E8E0((_QWORD **)&v23);
              if ( v23 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
              v4 = 0;
              goto LABEL_44;
            }
            v6 = (int)v17;
            v7 = HIDWORD(v17);
            sub_A0AE90((__int64 *)&v21);
            break;
        }
      }
    }
    v11 = v17;
    v17 = nullptr;
    v23 = v11;
    sub_A0E8E0((_QWORD **)&v23);
    if ( v23 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
    v4 = 0;
LABEL_20:
    sub_A0B030((__int64 *)&v17);
  }
  return v4;
}
