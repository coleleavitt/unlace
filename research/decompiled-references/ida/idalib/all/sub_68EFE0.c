__int64 __fastcall sub_68EFE0(__int64 a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  int v10; // edx
  int v11; // eax
  bool v12; // sf
  int v13; // edx
  __int64 result; // rax
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  int v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( (a5 & 0x600) != 0x400 || (a5 & 0xF0000000) != 0x50000000 )
  {
    if ( !under_debugger )
      interr(1549);
    BUG();
  }
  v8 = a4;
  v16 = *a3;
  v7 = v16;
  v10 = nbits(v16);
  v11 = v10 + 14;
  v12 = v10 + 7 < 0;
  v13 = v10 + 7;
  v18 = a6;
  if ( !v12 )
    v11 = v13;
  v17 = v8 * (v11 >> 3);
  result = sub_68EE40(a1, a2, &v16, a7);
  if ( (_BYTE)result )
    *a3 = v7 + v8;
  return result;
}
