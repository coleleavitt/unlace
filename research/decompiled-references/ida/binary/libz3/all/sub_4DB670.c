__int64 __fastcall sub_4DB670(__int64 **a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rsi
  std::chrono::_V2::steady_clock **v9; // r15
  std::chrono::_V2::steady_clock *v10; // rdi
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-68h]
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  _BYTE v16[88]; // [rsp+10h] [rbp-58h] BYREF

  sub_629C10(v16);
  v3 = *a1;
  if ( *a1 && (v4 = &v3[*((unsigned int *)v3 - 1)], v4 != v3) )
  {
    while ( 1 )
    {
      v7 = *v3;
      v8 = *v3 + 8;
      if ( !*v3 )
        v8 = 0;
      sub_629D90(v16, v8);
      v9 = *(std::chrono::_V2::steady_clock ***)a2;
      v10 = **(std::chrono::_V2::steady_clock ***)a2;
      if ( !(unsigned __int8)sub_18290A0(v10) )
        break;
      if ( (unsigned __int8)sub_186AF30() )
        goto LABEL_13;
      v5 = *(_QWORD *)(a2 + 40);
      if ( v5 )
      {
        v6 = *(_DWORD *)(a2 + 48);
        if ( v6 )
        {
          if ( *(_BYTE *)(v5 + 16) )
          {
            v15 = *(_DWORD *)(a2 + 48);
            v14 = *(_QWORD *)(a2 + 40);
            *(_QWORD *)(v5 + 8) += std::chrono::_V2::steady_clock::now(v10) - *(_QWORD *)v5;
            *(_BYTE *)(v14 + 16) = 0;
            v13 = std::chrono::_V2::steady_clock::now(v10);
            v5 = v14;
            v6 = v15;
            *(_QWORD *)v14 = v13;
            *(_BYTE *)(v14 + 16) = 1;
          }
          if ( v6 < (int)((double)(int)(*(_QWORD *)(v5 + 8) / 1000000LL) / 1000.0 * 1000.0) )
            goto LABEL_13;
        }
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, a2) )
        goto LABEL_13;
      if ( v4 == ++v3 )
        goto LABEL_19;
    }
    *((_DWORD *)v9 + 747) = 6;
LABEL_13:
    v11 = 0;
  }
  else
  {
LABEL_19:
    v11 = 1;
  }
  sub_629C50(v16);
  return v11;
}

