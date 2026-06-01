unsigned __int64 __fastcall sub_46D210(__int64 a1, char **a2, __int64 *a3, signed int a4, char a5)
{
  __int64 v7; // rdi
  __int64 *v9; // rbp
  unsigned __int64 v10; // r13
  unsigned int v12; // r15d
  unsigned int i; // r14d
  char *v14; // [rsp+0h] [rbp-198h]
  int v16; // [rsp+Ch] [rbp-18Ch]
  int v17[4]; // [rsp+20h] [rbp-178h] BYREF
  int v18[2]; // [rsp+30h] [rbp-168h]
  int v19[2]; // [rsp+38h] [rbp-160h]
  __m128i v20[17]; // [rsp+40h] [rbp-158h] BYREF
  int v21[2]; // [rsp+158h] [rbp-40h]

  v7 = *(int *)(a1 + 4LL * a4 + 16);
  *(_QWORD *)v21 = __readfsqword(0x28u);
  v9 = *(__int64 **)(switch_dbctx(v7) + 1672);
  v10 = sub_3BE900(v9, (unsigned __int64)a3, 0);
  v14 = (char *)sub_46CF20(v9, (unsigned __int64)a3, a5);
  if ( (v10 & 0x400) == 0 )
    goto LABEL_7;
  if ( (~(_WORD)v10 & 0x600) != 0 )
  {
    if ( (v10 & 0xF0000600) == 0x60000400 || (v10 & 0x70000600) == 0x50000400 )
    {
      v16 = 1;
      if ( !(unsigned __int8)sub_46A0E0(v20, a1, a4, (unsigned __int64)a3, 0, v10) )
        goto LABEL_13;
LABEL_37:
      if ( (unsigned __int8)sub_46A6F0(v9, v10, 0, (unsigned __int64 *)v20, (unsigned __int64)v14) )
        goto LABEL_38;
LABEL_13:
      v12 = 0;
      if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0x60000000 )
      {
        sub_3D19E0((_DWORD)v9, (_DWORD)a3);
        *(_QWORD *)v18 = 0;
        *(_QWORD *)v19 = 0;
        *(_OWORD *)v17 = 0;
        sub_3D4400(v9, a3, 1024, v14, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v17);
        if ( *(_QWORD *)v18 )
          (*(void (__fastcall **)(int *, int *, __int64))v18)(v17, v17, 3);
        v12 = 0;
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v16 = 1;
  }
  else
  {
    v16 = 2;
  }
  if ( (unsigned __int8)is_off(v10, 0)
    || (unsigned __int8)is_enum(v10, 0)
    || (unsigned __int8)is_stroff(v10, 0)
    || (unsigned __int8)is_custfmt(v10, 0) )
  {
    if ( !(unsigned __int8)sub_46A0E0(v20, a1, a4, (unsigned __int64)a3, 0, v10) )
      goto LABEL_13;
    goto LABEL_37;
  }
LABEL_38:
  v12 = 0;
  while ( ++v12 != v16 && (v10 & 0xD000000) == 0x8000000 )
  {
    if ( (unsigned __int8)sub_46A0E0(v20, a1, a4, (unsigned __int64)a3, v12, v10) )
    {
      v12 = 1;
      if ( (unsigned __int8)sub_46A6F0(v9, v10, 1u, (unsigned __int64 *)v20, (unsigned __int64)v14) )
        continue;
    }
LABEL_14:
    sub_3D0D10(v9, a3, v12);
LABEL_15:
    v10 = sub_3BE900(v9, (unsigned __int64)a3, 0);
  }
  if ( (~(_WORD)v10 & 0x600) == 0 && ((unsigned __int8)is_off(v10, 15) || (unsigned __int8)is_custfmt(v10, 15)) )
  {
    for ( i = 1; i != 8; ++i )
    {
      if ( sub_3C9470(v9, v20, (unsigned __int64)a3, i, v10)
        && !(unsigned __int8)sub_46A6F0(v9, v10, i, (unsigned __int64 *)v20, (unsigned __int64)v14) )
      {
        sub_3C8FE0(v9, (unsigned __int64)a3, i, v10);
        sub_3CFF40(v9, a3, 15LL << (4 * ((unsigned __int8)i + (i != 1) + 5)));
      }
    }
  }
LABEL_7:
  if ( a2 )
    *a2 = v14;
  return v10;
}
