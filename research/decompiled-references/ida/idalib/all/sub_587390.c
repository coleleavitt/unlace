_BOOL8 __fastcall sub_587390(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int32 v14; // ecx
  __int64 v15; // rdi
  char v16; // dl
  _BOOL8 result; // rax
  unsigned int v18; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1856);
  v6 = (unsigned int)sub_587160(v5, a3);
  if ( !v6 || (v9 = v6, v5 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 1856LL), (v10 = (unsigned int)sub_587160(v5, a3)) == 0) )
    sub_586870(v5, a3, v7);
  v13 = *(unsigned int *)(v12 + 12);
  v14 = *(_DWORD *)(v11 + 12);
  v15 = *(_QWORD *)(v11 + 32);
  v18 = v10;
  v16 = sub_4A2760(v15, &v18, v13, v14, 0);
  result = 1;
  if ( v16 )
    return v18 != v9;
  return result;
}
