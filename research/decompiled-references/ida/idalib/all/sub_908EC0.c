__int64 __fastcall sub_908EC0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  if ( *a2 )
    *a1 = *a2;
  v2 = a2[2];
  if ( v2 )
    a1[2] = v2;
  v3 = a2[1];
  if ( v3 )
    a1[1] = v3;
  v4 = a2[3];
  if ( v4 )
    a1[3] = v4;
  v5 = a2[4];
  if ( v5 )
    a1[4] = v5;
  v6 = a2[5];
  if ( v6 )
    a1[5] = v6;
  result = (unsigned int)a2[6];
  if ( (_DWORD)result )
    a1[6] = result;
  return result;
}
