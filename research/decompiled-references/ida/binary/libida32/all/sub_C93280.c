__int64 __fastcall sub_C93280(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rdx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !**(_BYTE **)a1 )
    goto LABEL_6;
  v2 = *(__int64 **)(a1 + 24);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*v2 + 40);
  if ( v3 == sub_C8AF60 )
  {
    if ( !*((_BYTE *)v2 + 40) )
    {
LABEL_6:
      v7 = *(_QWORD *)(a1 + 8);
      v9[0] = **(_QWORD **)(a1 + 16) | 4LL;
      return (unsigned int)sub_C87520(v7, v9);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v2 + 32))(*(_QWORD *)(a1 + 24), 0);
    v5 = v2[1];
    v9[0] = 4;
    v6 = v4;
    sub_C807C0(v5, *((_DWORD *)v2 + 9), v9);
  }
  else
  {
    v6 = v3(*(_QWORD *)(a1 + 24), 0);
  }
  if ( (_BYTE)v6 )
    goto LABEL_6;
  return v6;
}

