__int64 __fastcall sub_370B00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  _BYTE *v7; // rcx
  _QWORD v9[69]; // [rsp+0h] [rbp-228h] BYREF

  v9[65] = __readfsqword(0x28u);
  v6 = 0;
  if ( a1[6] )
  {
    v7 = (_BYTE *)a1[5];
    if ( *v7 )
    {
      qsnprintf((unsigned int)v9, 512, (unsigned int)"$ idc_array %s", (_DWORD)v7, a5, a6);
      v6 = (unsigned __int8)netnode_rename(a1[1], v9, 0);
    }
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
