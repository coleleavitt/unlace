__int64 __fastcall sub_7C64F0(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // si

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 80) + 24LL);
  v3 = *(__int64 (**)(void))(*v2 + 48LL);
  if ( (char *)v3 != (char *)sub_784580 )
    return v3();
  v4 = v2[412];
  result = a2 >> 1;
  if ( v4 )
  {
    if ( (unsigned int)result < *(_DWORD *)(v4 - 4) )
    {
      v6 = !(a2 & 1);
      *(_BYTE *)(v2[431] + result) = v6;
      *(_BYTE *)(v2[432] + result) = v6;
    }
  }
  return result;
}

