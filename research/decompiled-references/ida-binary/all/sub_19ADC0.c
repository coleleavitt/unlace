__int64 __fastcall sub_19ADC0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  const char *v10; // r12
  __int64 bpt_kernel_interface; // rax
  unsigned int v12; // eax
  void (__fastcall ***v13)(_QWORD); // rdi
  bool v14; // zf
  void (__fastcall ***v15)(_QWORD); // rdi
  _DWORD *v17; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h] BYREF
  __int64 v20; // [rsp+18h] [rbp-30h]
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 232);
  v20 = 0;
  v19 = xmmword_8CC810;
  if ( v2 )
  {
    v3 = sub_3839F0();
    if ( v3 )
    {
      v4 = sub_1F3AB0(*(_QWORD *)(a1 + 232), 0);
      if ( v4 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
        if ( v5 != -1 )
        {
          (*(void (__fastcall **)(_DWORD **, _QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v3 + 40) + 48LL))(
            &v17,
            *(_QWORD *)(v3 + 40),
            v5,
            1,
            3,
            0);
          if ( v17 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17) )
            {
              v6 = v17;
              v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL);
              if ( v7 == sub_1992A0 )
                (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v17 + 24LL))(&v18);
              else
                ((void (__fastcall *)(_DWORD **))v7)(&v18);
              v8 = v18;
              v9 = (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 24LL))(v18);
              v10 = &s1;
              if ( *(_QWORD *)(v3 + 64) )
                v10 = *(const char **)(v3 + 56);
              bpt_kernel_interface = get_bpt_kernel_interface(v8, v6);
              v12 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)bpt_kernel_interface + 72LL))(
                      bpt_kernel_interface,
                      v10);
              v13 = (void (__fastcall ***)(_QWORD))v18;
              v20 = v12 | 0x300000000LL;
              v19 = v9;
              if ( v18 )
              {
                v14 = v18[2]-- == 1;
                if ( v14 )
                  (**v13)(v13);
              }
            }
            v15 = (void (__fastcall ***)(_QWORD))v17;
            if ( v17 )
            {
              v14 = v17[2]-- == 1;
              if ( v14 )
                (**v15)(v15);
            }
          }
        }
      }
    }
  }
  return (unsigned __int8)sub_19AC00(&v19);
}
