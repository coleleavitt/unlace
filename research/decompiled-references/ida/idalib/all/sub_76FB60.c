__int64 __fastcall sub_76FB60(_DWORD *a1, __int64 *a2)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // r9
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r10

  v2 = dword_2CD43F0;
  *a1 = 0;
  result = (unsigned int)(v2 - 1);
  dword_2CD43F0 = result;
  if ( (int)result < 0 )
    __longjmp_chk(env, 4294967288LL);
  v4 = *((unsigned __int8 *)a2 + 8);
  v5 = *a2;
  v7 = 16 * ((unsigned int)result + 125LL);
  v8 = &byte_2CCCDE0[v7];
  *(_QWORD *)v8 = *a2;
  *((_WORD *)v8 + 4) = 0;
  *((_WORD *)v8 + 5) = v4;
  if ( (unsigned __int16)v4 <= 8u )
  {
    v9 = v4 - 1;
    v10 = v4 - 1;
    result = v10 - 1;
    v11 = v10 - 1 - v9;
    while ( 1 )
    {
      v8[v10] = *(_BYTE *)(v5 + v10);
      v10 = result;
      if ( result == v11 )
        break;
      --result;
    }
  }
  *(_WORD *)a1 = v7;
  return result;
}
