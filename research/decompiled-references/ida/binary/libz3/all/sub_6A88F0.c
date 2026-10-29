__int64 __fastcall sub_6A88F0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // eax
  _DWORD *v11; // r14

  v1 = *(_QWORD *)(a1 + 4624);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  if ( *(_DWORD *)(a1 + 4560) != v2 )
  {
    *(_BYTE *)(a1 + 4744) = 0;
    sub_11C7890(a1 + 96);
    sub_786C50(a1 + 4544, *(_QWORD *)(a1 + 8), a1 + 4360, a1 + 96, a1 + 4648, a1 + 4504, 1);
    v6 = *(_QWORD *)(a1 + 4624);
    if ( v6 )
      v7 = *(_DWORD *)(v6 - 4);
    else
      v7 = 0;
    sub_787B60(
      a1 + 4544,
      v7 - *(_DWORD *)(a1 + 4560),
      v6 + 8 * *(_DWORD *)(a1 + 4560),
      v6 + 8 * *(_DWORD *)(a1 + 4560),
      v4,
      v5);
    v8 = *(_QWORD *)(a1 + 4704);
    if ( !v8 )
    {
      v8 = sub_186B270(0x68u);
      sub_781140(v8, *(_QWORD *)(a1 + 8));
      ++*(_DWORD *)(v8 + 8);
      v11 = *(_DWORD **)(a1 + 4704);
      if ( v11 )
      {
        if ( v11[2]-- == 1 )
        {
          (**(void (__fastcall ***)(_DWORD *))v11)(v11);
          sub_186B220(v11);
        }
      }
      *(_QWORD *)(a1 + 4704) = v8;
    }
    sub_7826B0(v8, a1 + 96, a1 + 4648);
    v9 = *(_QWORD *)(a1 + 4624);
    if ( v9 )
      v10 = *(_DWORD *)(v9 - 4);
    else
      v10 = 0;
    *(_DWORD *)(a1 + 4560) = v10;
    sub_18290A0(*(_QWORD *)(a1 + 8));
  }
  return sub_6A8400(a1);
}

