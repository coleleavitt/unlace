__int64 __fastcall sub_A8A610(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // rax
  int v11; // rdx^4
  int v12; // r14^4
  unsigned int v13; // edx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+10h] [rbp-48h]

  if ( (unsigned int)*(unsigned __int8 *)(a3 + 16) - 2 > 1 )
  {
    v10 = sub_A73FE0(a2, a3);
    v12 = v11;
    v14 = v13;
    v15 = v10;
    v16 = sub_A74290(a2);
    v17 = sub_A74290(a2);
    *(_DWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = v15 / v17;
    *(_QWORD *)(a1 + 8) = v14 / v16;
  }
  else
  {
    sub_A8A610(&v18, a2, *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    v4 = *(_QWORD **)(a3 + 40);
    if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v4 + 2) <= 0x40u )
        v4 = (_QWORD *)*v4;
      else
        v4 = *(_QWORD **)*v4;
    }
    v5 = *(_QWORD *)(a2 + 17448);
    v6 = v18 * (_QWORD)v4;
    v7 = v19;
    if ( *(_DWORD *)(v5 + 340) != 10 || *(_BYTE *)(v5 + 8) == 64 )
      v6 = v19 * ((v6 != 0) + (v6 - (v6 != 0)) / v19);
    *(_QWORD *)a1 = v6;
    v8 = v20;
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = v8;
  }
  return a1;
}

