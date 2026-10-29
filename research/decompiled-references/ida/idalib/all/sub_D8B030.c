__int64 __fastcall sub_D8B030(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = *(unsigned int *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 32);
  if ( (_DWORD)v2 == -1 )
  {
    sub_E23220(a1, v3, v2, 0);
  }
  else
  {
    v4 = (unsigned int)(v2 - *(_DWORD *)(v3 + (unsigned int)v2 + 24));
    sub_E23220(a1, v3, v4, (unsigned int)v4);
  }
  return a1;
}
