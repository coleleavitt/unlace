__int64 __fastcall sub_70D900(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-40h]
  int v17; // [rsp+10h] [rbp-38h]

  if ( (unsigned int)*(unsigned __int8 *)(a3 + 16) - 2 > 1 )
  {
    v10 = sub_6F6DE0(a2, a3);
    v12 = v11 >> 32;
    v13 = (unsigned int)v11
        / (unsigned __int64)sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
    v14 = sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
    *(_QWORD *)(a1 + 8) = v13;
    *(_DWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = v10 / v14;
    return a1;
  }
  else
  {
    sub_70D900(&v15, a2, *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    v4 = *(_QWORD **)(a3 + 40);
    if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v4 + 2) <= 0x40u )
        v4 = (_QWORD *)*v4;
      else
        v4 = *(_QWORD **)*v4;
    }
    v5 = *(_QWORD *)(a2 + 17288);
    v6 = v15 * (_QWORD)v4;
    v7 = v16;
    if ( *(_DWORD *)(v5 + 340) != 10 || *(_BYTE *)(v5 + 8) == 64 )
      v6 = v16 * ((v6 != 0) + (v6 - (v6 != 0)) / v16);
    *(_QWORD *)a1 = v6;
    v8 = v17;
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = v8;
    return a1;
  }
}

