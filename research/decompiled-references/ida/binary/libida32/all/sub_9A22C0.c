__int64 __fastcall sub_9A22C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // r12d
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebp

  v2 = a2[1];
  v3 = sub_EC7AA0(v2);
  v4 = a1[1];
  v5 = v3;
  v6 = sub_EC7AA0(v4);
  v7 = -1;
  if ( v5 <= v6 )
  {
    v8 = sub_EC7AA0(v4);
    return (unsigned int)sub_EC7AA0(v2) < v8;
  }
  return v7;
}

