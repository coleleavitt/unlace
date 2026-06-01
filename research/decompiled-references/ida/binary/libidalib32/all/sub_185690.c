const char *sub_185690()
{
  __int64 v0; // rax
  const char *v1; // rbx
  __int128 v3; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h]
  __int128 v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v3 = 0;
  v5 = 0;
  v4 = 0;
  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v1 = (const char *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v0 + 48LL))(v0, &v3);
  if ( !TFileList::getKey((TFileList *)TProgram::application, v1) )
    v1 = nullptr;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v1;
}

