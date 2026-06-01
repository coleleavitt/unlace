__int64 __fastcall sub_593D60(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  __int64 v3; // rax
  _BYTE v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v1 = 0;
  v2 = 0;
  v6 = __readfsqword(0x28u);
  do
  {
    v3 = sub_72B5B0(v2);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) <= 1u )
      v5[0] = 0;
    else
      set_file_ext(v5, 4096, *(_QWORD *)(*(_QWORD *)a1 + 48LL), v3);
    ++v2;
    v1 += qfilesize(v5);
  }
  while ( v2 != 6 );
  return v1;
}
