__int64 __fastcall sub_795CA0(_QWORD *a1, __int64 a2, const char *a3, unsigned int a4)
{
  __int64 v5; // rbp
  unsigned __int8 v7; // r12
  unsigned int v8; // r13d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int qerrno; // r12d
  __int64 v14; // rax
  int v16; // [rsp-8h] [rbp-98h]
  int v17; // [rsp+0h] [rbp-90h]
  void *v18; // [rsp+8h] [rbp-88h]
  __int128 v19; // [rsp+10h] [rbp-80h]
  int v20; // [rsp+20h] [rbp-70h]
  int v21; // [rsp+28h] [rbp-68h]
  int v22; // [rsp+30h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-58h]

  v5 = a1[7];
  v19 = 0;
  v18 = nullptr;
  v7 = set_interr_throws(1);
  v8 = sub_793960((__int64)a1, a2, a3, a4);
  set_interr_throws(v7);
  qerrno = get_qerrno(v7);
  while ( (unsigned __int64)(int)v5 < a1[7] )
  {
    if ( !(unsigned __int8)sub_798200(
                             (_DWORD)a1,
                             a2,
                             v9,
                             v10,
                             v11,
                             v12,
                             v16,
                             v17,
                             (_DWORD)v18,
                             v19,
                             DWORD2(v19),
                             v20,
                             v21,
                             v22,
                             v23) )
    {
      if ( !under_debugger )
        interr(508);
      BUG();
    }
  }
  v14 = a1[13];
  if ( v14 )
    v14 += 32;
  a1[16] = v14;
  if ( (_BYTE)v8 )
    qerrno = 0;
  set_qerrno(qerrno);
  if ( v18 )
    qfree(v18);
  return v8;
}
