__int64 __fastcall sub_79600(__int64 a1, __int64 a2, int *a3, double a4, double a5)
{
  __int16 v6; // dx
  bool v7; // r8
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  char v15; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v16; // [rsp+168h] [rbp-20h] BYREF

  v16 = __readfsqword(0x28u);
  v6 = *(_WORD *)(a2 + 24);
  v7 = v6 == 88 || v6 == 18;
  if ( v6 != 86 && v6 != 16 && !v7 )
    return 0;
  v8 = *(_BYTE *)(a2 + 41);
  if ( v8 != 7 && v8 != 2 )
    return 0;
  v10 = *(_QWORD *)(a2 + 56);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( v10 == -1 || v10 == v11 )
    return 0;
  v12 = v10 + 16LL * *(_QWORD *)a2;
  if ( v11 != v12 )
  {
    v13 = v12 & v11;
    if ( v12 != -1 )
      v12 = v13;
  }
  result = sub_78DA0(a1, a3, v12, 0, v7, a4, a5);
  if ( !(_DWORD)result )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      v14 = (unsigned __int64 *)&v15;
      do
      {
        *(_WORD *)v14 = 0;
        v14 += 5;
        *((_WORD *)v14 - 19) = 0;
        *((_WORD *)v14 - 18) = 0;
        *((_DWORD *)v14 - 2) = 0;
        *((_WORD *)v14 - 17) = 0;
        *((_OWORD *)v14 - 2) = 0;
        *(v14 - 2) = 0;
      }
      while ( v14 != &v16 );
      decode_insn();
    }
    return 0;
  }
  return result;
}
