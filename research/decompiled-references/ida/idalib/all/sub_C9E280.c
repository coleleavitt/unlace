__int64 __fastcall sub_C9E280(__int64 a1, __int64 *a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rdx

  v2 = *((_DWORD *)a2 + 16);
  result = a1;
  if ( ((unsigned int)(v2 - 2) <= 0xA || v2 == 23) && ((v4 = *((_DWORD *)a2 + 2), v4 == 6) || v4 == 13) )
  {
    v5 = *a2;
    *(_DWORD *)(a1 + 8) = 5;
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v5;
  }
  else
  {
    *(_BYTE *)(a1 + 16) = 0;
  }
  return result;
}
