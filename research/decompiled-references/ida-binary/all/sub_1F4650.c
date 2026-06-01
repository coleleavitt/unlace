__int64 __fastcall sub_1F4650(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v5; // r14d
  int v7; // eax
  __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v5 = *(unsigned __int8 *)(a1 + 968);
  v14 = __readfsqword(0x28u);
  if ( !(_BYTE)v5 )
    return v5;
  if ( *(_QWORD *)(a1 + 424) )
  {
    v7 = *(_DWORD *)(a1 + 416);
    switch ( v7 )
    {
      case 2:
        v9 = *(_QWORD *)(a1 + 896);
        break;
      case 3:
        v9 = *(_QWORD *)(a1 + 904);
        break;
      case 1:
        v9 = *(_QWORD *)(a1 + 888);
        break;
      default:
        return 0;
    }
    if ( v9 )
    {
      v10 = (__int64 *)qword_8CB508;
      if ( !qword_8CB508 )
      {
        v12 = operator new(0x18u);
        *(_QWORD *)v12 = 0;
        v10 = (__int64 *)v12;
        qword_8CB508 = v12;
        *(_OWORD *)(v12 + 8) = 0;
      }
      *(_QWORD *)&v13 = 0;
      *((_QWORD *)&v13 + 1) = a1;
      *(_QWORD *)(a2 + 32) = sub_1E7840(v10, &v13);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 352LL))(v9, a2 + 8, a3);
      return v5;
    }
    return 0;
  }
  sub_1E69C0(a5, a1, a2, a3, a4);
  return sub_1F4780();
}
