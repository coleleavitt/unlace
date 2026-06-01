__int64 __fastcall sub_2207ED0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  unsigned __int64 v7; // r13
  unsigned int v8; // ecx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 > 0x40 )
  {
    v7 = ((unsigned __int64)(v4 - (unsigned int)sub_C16760(a2)) + 63) >> 6;
    if ( !v7 )
      goto LABEL_11;
    v8 = *(_DWORD *)(a3 + 8) - sub_C16760(a3);
    if ( v8 == 1 )
      goto LABEL_11;
    v9 = ((unsigned __int64)v8 + 63) >> 6;
    if ( (unsigned int)v9 > (unsigned int)v7 || (int)sub_2205DB0((unsigned __int64 *)a2, (unsigned __int64 *)a3) < 0 )
    {
      *(_DWORD *)(a1 + 8) = v4;
      sub_2205510(a1, (const void **)a2);
      return a1;
    }
    if ( sub_2205D70(a2, (const void **)a3) )
    {
LABEL_11:
      *(_DWORD *)(a1 + 8) = v4;
      sub_2205470(a1, 0, 0);
    }
    else if ( (_DWORD)v7 == 1 )
    {
      v10 = **(_QWORD **)a2 % **(_QWORD **)a3;
      *(_DWORD *)(a1 + 8) = v4;
      sub_2205470(a1, v10, 0);
    }
    else
    {
      v12 = v4;
      sub_2205470((__int64)&v11, 0, 0);
      sub_2206F10(*(__int64 **)a2, v7, *(__int64 **)a3, v9, 0, v11);
      *(_DWORD *)(a1 + 8) = v12;
      *(_QWORD *)a1 = v11;
    }
  }
  else
  {
    v5 = *(_QWORD *)a2 % *(_QWORD *)a3;
    *(_DWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = v5;
  }
  return a1;
}
