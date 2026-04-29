__int64 __fastcall sub_37DD10(__int64 a1, unsigned __int64 a2, _BYTE *a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD **v13; // rbx
  void *v14; // rdi
  unsigned __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 *v17; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v18[8]; // [rsp+10h] [rbp-88h] BYREF
  int v19; // [rsp+18h] [rbp-80h] BYREF
  void *v20; // [rsp+20h] [rbp-78h]
  int *v21; // [rsp+28h] [rbp-70h]
  int *v22; // [rsp+30h] [rbp-68h]
  __int128 v23; // [rsp+38h] [rbp-60h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v6 = *(_QWORD *)a3;
    if ( (*a3 & 0xF) == 0xD && (v6 & 0x100) == 0 )
    {
      if ( !under_debugger )
        sub_37EEE0(50227);
      goto LABEL_16;
    }
    if ( (unsigned int)verify_tinfo(v6) )
    {
      if ( !under_debugger )
        sub_37EEE0(50226);
LABEL_16:
      BUG();
    }
    v10 = *(_QWORD *)(a1 + 1128);
    if ( a5 )
    {
      v19 = 0;
      v20 = nullptr;
      v21 = &v19;
      v22 = &v19;
      v23 = 0;
      copy_tinfo_t((char *)&v23 + 8, a3);
      v16 = a2;
      v24 = a4;
      v17 = &v16;
      v11 = sub_37ABD0((__m128i *)(v10 + 8), &v16, (__int64 **)&v17);
      v12 = v11 + 24;
      sub_3682C0((_QWORD *)(v11 + 32), (__int64)v18);
      copy_tinfo_t(v12 + 56, (char *)&v23 + 8);
      *(_QWORD *)(v12 + 64) = v24;
      clear_tinfo_t((char *)&v23 + 8);
      v13 = (_QWORD **)v20;
      if ( v20 )
      {
        do
        {
          sub_367A50(v13[3]);
          v14 = v13;
          v13 = (_QWORD **)v13[2];
          operator delete(v14, 0x28u);
        }
        while ( v13 );
      }
      goto LABEL_9;
    }
    if ( (unsigned __int8)sub_37AD40(*(_QWORD *)(a1 + 1128), a2, a3, a4) )
    {
LABEL_9:
      sub_142670(a1);
      return 1;
    }
  }
  return 0;
}
