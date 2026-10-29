__int64 __fastcall sub_42E490(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-29h]
  unsigned int v7[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v4 = *a2;
  v7[0] = 0;
  result = sub_40A830(
             *(_QWORD **)(*(_QWORD *)(v4 + 80) + 16LL),
             *(_DWORD *)(v4 + 96),
             a3,
             v7,
             *(unsigned __int16 *)(v4 + 106));
  if ( (_BYTE)result )
  {
    ++*(_DWORD *)(a1 + 20);
    v6 = result;
    sub_40ABA0(*a2, *a2 + 80, a3);
    sub_3FE9B0(*a2, v7[0]);
    return v6;
  }
  return result;
}

