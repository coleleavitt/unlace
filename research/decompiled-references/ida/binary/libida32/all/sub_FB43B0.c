__int64 __fastcall sub_FB43B0(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[195] += a2[195];
  a1[196] += a2[196];
  a1[197] += a2[197];
  result = (unsigned int)a2[198];
  a1[198] += result;
  return result;
}

