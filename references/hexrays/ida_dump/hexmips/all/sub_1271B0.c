__int64 __fastcall sub_1271B0(char *a1, unsigned __int8 *a2)
{
  char v2; // al
  char v3; // dl
  unsigned int v4; // ebp
  char v5; // al
  __int16 v6; // ax
  int v7; // eax
  __int64 v8; // rax
  int v10; // eax
  __int64 *v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  _DWORD *v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 i; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  _QWORD v23[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+40h] [rbp-68h]
  _DWORD v26[4]; // [rsp+50h] [rbp-58h] BYREF
  int v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v21 = 0xFFFFFFFF00000000LL;
  v22 = 0;
  sub_1220E0((__int64)&v21, a2);
  v2 = *a1;
  v3 = v21;
  if ( *a1 != 15 || (_BYTE)v21 == 15 )
    goto LABEL_3;
  v23[0] = 0;
  v23[1] = 0;
  v4 = sub_1C0C70(&v21, v23);
  if ( (_BYTE)v4 )
  {
    v11 = *(__int64 **)(*((_QWORD *)a1 + 1) + 8LL);
    if ( v11[1] != 1 )
    {
      v24[1] = 0;
      v25 = 0xFFFF;
      v12 = v11[1];
      v24[0] = 0;
      if ( v12 > 1 )
      {
        for ( i = 1; i != v12; ++i )
        {
          v18 = 3 * i;
          cleanup_argloc(*v11 + 8 * v18);
        }
        v11[1] = 1;
      }
      else if ( !v12 )
      {
        v14 = (_DWORD *)*v11;
        v15 = v11[2];
        if ( (unsigned __int64)v24 < *v11 || v24 >= (_QWORD *)&v14[6 * v15] )
        {
          if ( v15 || (v19 = qvector_reserve(v11, *v11, 1, 24), v20 = v11[1] == 0, *v11 = v19, v14 = (_DWORD *)v19, v20) )
          {
            *v14 = 0;
            copy_argloc(v14, v24);
            v14[4] = v25;
          }
          v11[1] = 1;
        }
        else
        {
          v26[0] = 0;
          copy_argloc(v26, v24);
          v27 = v25;
          if ( !v11[2] )
            *v11 = qvector_reserve(v11, *v11, 1, 24);
          if ( !v11[1] )
          {
            v16 = (_DWORD *)*v11;
            *v16 = 0;
            copy_argloc(v16, v26);
            v16[4] = v27;
          }
          v11[1] = 1;
          cleanup_argloc(v26);
        }
      }
      cleanup_argloc(v24);
    }
    v13 = *v11;
    copy_argloc(*v11, v23);
    *(_WORD *)(v13 + 16) = 0;
    *(_WORD *)(v13 + 18) = WORD2(v21);
    goto LABEL_8;
  }
  v10 = HIDWORD(v21);
  if ( HIDWORD(v21) != *((_DWORD *)a1 + 1)
    && (v10 != get_tinfo_property(*(_QWORD *)(*((_QWORD *)a1 + 1) + 48LL), 15)
     || !(unsigned __int8)sub_126950(
                            (unsigned __int64)&v21,
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 1504LL),
                            *((_DWORD *)a1 + 1),
                            0)) )
  {
LABEL_8:
    cleanup_argloc(v23);
    goto LABEL_4;
  }
  cleanup_argloc(v23);
  v2 = *a1;
  v3 = v21;
LABEL_3:
  *a1 = v3;
  v4 = 1;
  LOBYTE(v21) = v2;
  v5 = a1[1];
  a1[1] = BYTE1(v21);
  BYTE1(v21) = v5;
  v6 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = WORD1(v21);
  WORD1(v21) = v6;
  v7 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = HIDWORD(v21);
  HIDWORD(v21) = v7;
  v8 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v22;
  v22 = v8;
LABEL_4:
  sub_118BA0((__int64)&v21);
  return v4;
}
