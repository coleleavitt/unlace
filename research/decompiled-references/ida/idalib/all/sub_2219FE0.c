__int64 __fastcall sub_2219FE0(char *a1, char *a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // rbx
  char *v7; // r11
  char *v8; // r9
  char v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r8
  const char *v13; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // [rsp+0h] [rbp-C8h]
  const char *v18; // [rsp+8h] [rbp-C0h] BYREF
  void *v19[2]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v20[16]; // [rsp+20h] [rbp-A8h] BYREF
  __m128 v21; // [rsp+30h] [rbp-98h] BYREF
  const char *v22; // [rsp+40h] [rbp-88h]
  __int64 v23; // [rsp+48h] [rbp-80h]
  void **v24; // [rsp+50h] [rbp-78h] BYREF
  int v25; // [rsp+58h] [rbp-70h]
  __int128 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  char v28; // [rsp+78h] [rbp-50h]
  int v29; // [rsp+7Ch] [rbp-4Ch]
  void **v30; // [rsp+80h] [rbp-48h]

  v3 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 1);
  if ( !a3 )
  {
    v6 = *(_QWORD *)a2;
    v7 = (char *)(v3 + v4);
    v8 = (char *)(*(_QWORD *)a2 + v3);
    if ( v7 == v8 )
      return 0;
    goto LABEL_5;
  }
  if ( !*a3 )
  {
    v6 = *(_QWORD *)a2;
    v7 = (char *)(v3 + v4);
    v8 = (char *)(*(_QWORD *)a2 + v3);
    if ( v8 == v7 )
    {
      v13 = "malformed uleb128, extends past end";
LABEL_14:
      v18 = a2;
      v17 = std::_V2::generic_category((std::_V2 *)a1);
      v26 = 0;
      v19[0] = v20;
      v30 = v19;
      v19[1] = nullptr;
      v20[0] = 0;
      v25 = 0;
      v28 = 0;
      v29 = 1;
      v27 = 0;
      v24 = (void **)&off_2BEBE68;
      sub_227B8B0(&v24, 0, 0, 0);
      v22 = v13;
      v15 = *(_QWORD *)a2;
      v18 = "unable to decode LEB128 at offset 0x%8.8lx: %s";
      v23 = v15;
      v21 = _mm_loadh_ps((const double *)&v18);
      sub_227C560(&v24, &v21);
      v24 = (void **)&off_2BEBE68;
      sub_227B7A0(&v24);
      v24 = v19;
      LOWORD(v27) = 260;
      v16 = operator new(0x40u);
      sub_2220590(v16, &v24, 84, v17);
      if ( v19[0] != v20 )
        operator delete(v19[0]);
      *a3 = v16;
      return 0;
    }
LABEL_5:
    v9 = *v8;
    a1 = v8;
    result = 0;
    v10 = 0;
    v11 = *v8 & 0x7F;
    while ( 1 )
    {
      v12 = v11 << v10;
      ++a1;
      v10 += 7;
      result += v12;
      if ( v9 >= 0 )
      {
        *(_QWORD *)a2 = v6 + (unsigned int)((_DWORD)a1 - (_DWORD)v8);
        return result;
      }
      if ( a1 == v7 )
        break;
      v9 = *a1;
      v11 = *a1 & 0x7F;
      if ( v10 > 0x3E )
      {
        if ( v10 == 63 )
        {
          if ( v11 != (v9 & 1) )
          {
LABEL_11:
            v13 = "uleb128 too big for uint64";
            goto LABEL_13;
          }
        }
        else if ( (*a1 & 0x7F) != 0 )
        {
          goto LABEL_11;
        }
      }
    }
    v13 = "malformed uleb128, extends past end";
LABEL_13:
    if ( !a3 )
      return 0;
    goto LABEL_14;
  }
  return 0;
}
