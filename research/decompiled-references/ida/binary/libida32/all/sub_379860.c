__int64 __fastcall sub_379860(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 idc_class; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD *)(qword_2CA1698 + 536);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 0x40) != 0 )
      callui();
    if ( *(_DWORD *)(a1 + 40) )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      v5 = *(unsigned int *)(a1 + 40);
      if ( *(_DWORD *)(a1 + 40) )
      {
        v6 = qvector_reserve(a2 + 8, 0, v5 + 1, 1);
        v7 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = v6;
        memset((void *)(v6 + v7), 0, v5 + 1 - v7);
        v8 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 16) = v5 + 1;
        *(_BYTE *)(v8 + v5) = 0;
      }
      callui();
    }
    return 0;
  }
  else
  {
    idc_class = find_idc_class("exception");
    idcv_object(a2, idc_class);
    return throw_idc_exception();
  }
}

