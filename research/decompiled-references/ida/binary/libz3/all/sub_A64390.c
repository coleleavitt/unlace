__int64 __fastcall sub_A64390(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r15
  char v6; // r12
  unsigned int *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r12
  unsigned int v14; // ebx
  __int64 v16; // [rsp+0h] [rbp-58h]
  _DWORD *v17; // [rsp+8h] [rbp-50h]
  _DWORD *v18; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_WORD *)(a2 + 4) || (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v2 != 5 || v2[1] != 7 )
  {
    sub_1872CE0("");
    sub_1873130(114, 314);
  }
  v3 = (__int64 *)(a2 + 32);
  v18 = nullptr;
  HIDWORD(v16) = sub_A47740(a1);
  sub_9C76A0(&v18, (unsigned __int64 *)(a1 + 784), (unsigned int *)(a1 + 792));
  v17 = v18;
  v4 = 8LL * *(unsigned int *)(a2 + 24);
  v5 = (__int64 *)(a2 + 32 + v4);
  if ( v4 )
  {
    v6 = 1;
    do
    {
      while ( 1 )
      {
        v7 = (unsigned int *)*v3;
        sub_9D4D10(a1, *v3, a2);
        v12 = sub_A63A20((__int64 *)a1, v7, v8, v9, v10, v11, v16);
        if ( !v6 )
          break;
        sub_9F2330(a1, HIDWORD(v16), (__int64)&qword_1C7F280, v12);
        ++v3;
        v6 = 0;
        if ( v5 == v3 )
          goto LABEL_10;
      }
      sub_9F2070(a1, HIDWORD(v16), (__int64)&qword_1C7F280, v12);
      ++v3;
      v6 = 0;
    }
    while ( v5 != v3 );
  }
LABEL_10:
  v13 = sub_99A610(a1, (unsigned int *)a2);
  v14 = sub_B39350(v13, *(unsigned int *)(a1 + 8));
  if ( v14 == -1 )
  {
    v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v13);
    sub_9F2070(a1, HIDWORD(v16), (__int64)&qword_1C7F280, v14);
    sub_A48A40(a1, HIDWORD(v16));
  }
  else
  {
    sub_9D7600(a1, HIDWORD(v16));
  }
  --*v17;
  return v14;
}

