__int64 __fastcall sub_E02DB0(__int64 a1, __int64 *****a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  int v5; // eax
  __int64 ****v6; // rdi
  __int64 v7; // rax
  bool v8; // [rsp+1h] [rbp-29h]
  void *v9[4]; // [rsp+Ah] [rbp-20h] BYREF

  result = *(unsigned __int8 *)(a1 + 189);
  if ( (_BYTE)result )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      v4 = *(_QWORD *)(a1 + 872);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 52);
        if ( v5 == 1 || ((v5 + 1) & 0xFFFFFFFD) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *****))(*(_QWORD *)v4 + 32LL))(*(_QWORD *)(a1 + 872), a2);
          v6 = *a2;
          if ( *a2 )
          {
            v7 = *(_QWORD *)(v4 + 56);
            if ( v7 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *****))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(v4 + 56), a2);
              v6 = *a2;
              v9[0] = nullptr;
              if ( !v6 )
                goto LABEL_10;
            }
            else
            {
              v9[0] = nullptr;
            }
            sub_13733B0(v6, v9);
          }
          else
          {
            v9[0] = nullptr;
          }
LABEL_10:
          sub_E022C0(a1, a2);
          v8 = *a2 != nullptr;
          sub_18572D0(v9);
          return v8;
        }
      }
    }
    return 0;
  }
  return result;
}

