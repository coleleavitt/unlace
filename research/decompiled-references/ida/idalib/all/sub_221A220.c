__int64 __fastcall sub_221A220(char *a1, char *a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rbx
  char *v7; // rbp
  char *v8; // r9
  char v9; // r11
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  const char *v14; // r12
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // [rsp+0h] [rbp-C8h]
  const char *v19; // [rsp+8h] [rbp-C0h] BYREF
  void *v20[2]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v21[16]; // [rsp+20h] [rbp-A8h] BYREF
  __m128 v22; // [rsp+30h] [rbp-98h] BYREF
  const char *v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-80h]
  void **v25; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+58h] [rbp-70h]
  __int128 v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  char v29; // [rsp+78h] [rbp-50h]
  int v30; // [rsp+7Ch] [rbp-4Ch]
  void **v31; // [rsp+80h] [rbp-48h]

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
      v14 = "malformed sleb128, extends past end";
LABEL_16:
      v19 = a2;
      v18 = std::_V2::generic_category((std::_V2 *)a1);
      v27 = 0;
      v20[0] = v21;
      v31 = v20;
      v20[1] = nullptr;
      v21[0] = 0;
      v26 = 0;
      v29 = 0;
      v30 = 1;
      v28 = 0;
      v25 = (void **)&off_2BEBE68;
      sub_227B8B0(&v25, 0, 0, 0);
      v23 = v14;
      v16 = *(_QWORD *)a2;
      v19 = "unable to decode LEB128 at offset 0x%8.8lx: %s";
      v24 = v16;
      v22 = _mm_loadh_ps((const double *)&v19);
      sub_227C560(&v25, &v22);
      v25 = (void **)&off_2BEBE68;
      sub_227B7A0(&v25);
      v25 = v20;
      LOWORD(v28) = 260;
      v17 = operator new(0x40u);
      sub_2220590(v17, &v25, 84, v18);
      if ( v20[0] != v21 )
        operator delete(v20[0]);
      *a3 = v17;
      return 0;
    }
LABEL_5:
    v9 = *v8;
    a1 = v8;
    v10 = 0;
    result = 0;
    v11 = *v8 & 0x7F;
    while ( 1 )
    {
      v12 = v11 << v10;
      ++a1;
      v10 += 7;
      v13 = result | v12;
      result |= v12;
      if ( v9 >= 0 )
      {
        if ( v10 <= 0x3F && (v9 & 0x40) != 0 )
          result |= -1LL << v10;
        *(_QWORD *)a2 = v6 + (unsigned int)((_DWORD)a1 - (_DWORD)v8);
        return result;
      }
      if ( a1 == v7 )
        break;
      v9 = *a1;
      v11 = *a1 & 0x7F;
      if ( v10 > 0x3E && (v11 != 127 && v11 != 0 && v10 == 63 || v10 != 63 && v11 != ((v13 >> 63) & 0x7F)) )
      {
        v14 = "sleb128 too big for int64";
        goto LABEL_15;
      }
    }
    v14 = "malformed sleb128, extends past end";
LABEL_15:
    if ( !a3 )
      return 0;
    goto LABEL_16;
  }
  return 0;
}
