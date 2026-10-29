__int64 __fastcall sub_18C3650(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+8h] [rbp-30h]

  sub_B8C4D0(a4, *(_QWORD *)(a1 + 248));
  v6 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL));
  result = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x7F;
  if ( unk_2CD7484 )
  {
    v11 = result;
    sub_EE9B50(127);
    result = v11;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_QWORD *)(result + 24) = a4;
  v8 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v8 - 8);
    if ( v9 )
    {
      v10 = *(unsigned int *)(v9 + 720);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 724) )
      {
        v12 = result;
        sub_2237220(v9 + 712, v9 + 728, v10 + 1, 8);
        v10 = *(unsigned int *)(v9 + 720);
        result = v12;
      }
      *(_QWORD *)(*(_QWORD *)(v9 + 712) + 8 * v10) = result;
      ++*(_DWORD *)(v9 + 720);
    }
  }
  return result;
}
