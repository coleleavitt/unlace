__int64 __fastcall qstrcmp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  __int16 v5; // r8
  __int64 result; // rax

  v2 = 0;
  do
  {
    v3 = *(unsigned __int16 *)(a1 + v2);
    v4 = *(unsigned __int16 *)(a2 + v2);
    v2 += 2;
    v5 = v3;
    result = (unsigned int)(v3 - v4);
  }
  while ( !(_DWORD)result && v5 );
  return result;
}

