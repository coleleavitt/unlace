__int64 __fastcall sub_1F8CA30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-30h]
  __int64 v11[4]; // [rsp+10h] [rbp-20h] BYREF

  result = *(_QWORD *)(a1 + 40);
  if ( (!result || !*(_BYTE *)(result + 9267)) && *(char *)(a2 + 29) < 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
      v7 = (unsigned int)sub_B77EF0(a2);
    else
      v7 = (unsigned int)sub_B73F60(a2);
    v11[0] = a2;
    result = sub_1F8B440(a1 + 1280, v11, v3, v4, v5, v6);
    v8 = *(unsigned int *)(result + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(result + 12) )
    {
      v10 = result;
      sub_2237220(result, result + 16, v8 + 1, 16);
      result = v10;
      v8 = *(unsigned int *)(v10 + 8);
    }
    v9 = (_QWORD *)(*(_QWORD *)result + 16 * v8);
    *v9 = 4;
    v9[1] = v7;
    ++*(_DWORD *)(result + 8);
  }
  return result;
}
