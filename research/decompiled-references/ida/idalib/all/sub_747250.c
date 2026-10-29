__int64 __fastcall sub_747250(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  unsigned int *v3; // rbx
  __int64 result; // rax
  unsigned int *v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+18h] [rbp-50h]
  __int128 v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !(unsigned __int8)sub_73CCE0(a1, 0) )
    {
      sub_733E40((__int64)"*** FATAL: %s\n", "close index file error");
      sub_743080();
      exit(-1);
    }
    return 0;
  }
  qword_2CCC6E8 = a3;
  byte_2CCCD18 = 1;
  dword_2CCC6F0 = 0;
  qword_2CCCD10 = 0;
  qword_2CCCD20 = (__int64 (*)(void))off_2C81BC0;
  off_2C81BC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))sub_746BE0;
  v3 = (unsigned int *)operator new(0x16D0u);
  sub_743140((__int64)v3, a1, 2048, nullptr);
  if ( !(unsigned __int8)sub_73CA40(v3, 33, 0x27u, 0) )
  {
    if ( v3 )
    {
      sub_743350((__int64)v3);
      operator delete(v3, 0x16D0u);
    }
    off_2C81BC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))qword_2CCCD20;
    return 0;
  }
  byte_2CCCD18 = 0;
  v5 = (unsigned int *)operator new(0x16D0u);
  sub_743140((__int64)v5, a2, 2048, nullptr);
  v6 = *v3;
  off_2C81BC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))sub_746BE0;
  dword_2CCC6F0 = 1;
  dword_2CCC6F4 = v6 / 0xA;
  dword_2CCC6E0 = v3[6];
  if ( !sub_73CE40((__int64)v3, a2, 3435973837LL, v7, v8, v9)
    || !(unsigned __int8)sub_73C890((__int64)v5, *v3)
    || !(unsigned __int8)sub_73CC80(v5, 0, 0) )
  {
    if ( v3 )
    {
      sub_743350((__int64)v3);
      operator delete(v3, 0x16D0u);
    }
    if ( v5 )
    {
      sub_743350((__int64)v5);
      operator delete(v5, 0x16D0u);
    }
    return 0;
  }
  sub_7430F0((__int64)v5, 0);
  v10 = *v3;
  v15 = sub_73CE40((__int64)v3, 0, v11, v12, v13, v14);
  sub_73CE70((__int64)v5, v15, v10, v16, v17, v18);
  v27 = 0;
  v25 = 0;
  ptr = nullptr;
  sub_747130(v3, (__int64)v5, (__int64)&v25, v19, v20, v21);
  result = v5[7];
  if ( v5 )
  {
    v22 = v5[7];
    sub_743350((__int64)v5);
    operator delete(v5, 0x16D0u);
    result = v22;
  }
  if ( v3 )
  {
    v23 = result;
    sub_743350((__int64)v3);
    operator delete(v3, 0x16D0u);
    result = v23;
  }
  off_2C81BC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))qword_2CCCD20;
  if ( ptr )
  {
    v24 = result;
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
    return v24;
  }
  return result;
}
