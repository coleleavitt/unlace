__int64 __fastcall sub_152150(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rax
  int v5; // ebp
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14[16]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v15[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v4 = *(unsigned __int8 **)(a1 + 40);
  v16 = __readfsqword(0x28u);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  if ( *(_DWORD *)v4 == 29 )
  {
    sub_120A10(a1 + 48, a2, 0, *((_DWORD *)v4 + 9), *(_QWORD *)(a1 + 24), 0);
    sub_123A40((__int64)v15, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 32LL), v12, v13);
    sub_125180(a1 + 32, v15);
    v10 = 51;
    sub_11CDA0((__int64)v15);
    goto LABEL_4;
  }
  v7 = (unsigned int)(v5 - 32);
  if ( (unsigned int)v7 <= 9 )
  {
    sub_123A40((__int64)v14, v4 + 32, v7, a4);
    sub_123A40((__int64)v15, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 48LL), v8, v9);
    sub_125180(a1 + 32, v14);
    sub_125180(a1 + 48, v15);
    v10 = v5 + 11;
    sub_11CDA0((__int64)v15);
    sub_11CDA0((__int64)v14);
LABEL_4:
    *(_DWORD *)a1 = v10;
    *(_DWORD *)(a1 + 4) = v6;
    return 1;
  }
  return 0;
}
