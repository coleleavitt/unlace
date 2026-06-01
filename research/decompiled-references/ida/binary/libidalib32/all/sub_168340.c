__int64 __fastcall sub_168340(__int64 *a1, double a2, double a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 result; // rax
  const char *v8; // rax
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // rbp
  int v13; // eax
  __int64 v14; // rsi
  struct _Unwind_Exception *v15; // rbx
  unsigned int v16; // [rsp+Ch] [rbp-7Ch]
  unsigned int v17; // [rsp+Ch] [rbp-7Ch]
  unsigned int v18; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 416LL);
  if ( v4 == sub_B7C80 )
  {
    v5 = *(_QWORD *)(v3 + 480);
    if ( !v5 )
    {
      v15 = (struct _Unwind_Exception *)sub_1582F0(a1);
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      _Unwind_Resume(v15);
    }
    v6 = sub_F4670(*a1, v5);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD))v4)(*a1, 0);
  }
  v18 = v6;
  if ( v6 == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    return 0;
  v8 = sub_158C20(v3);
  v20 = 0;
  v19 = nullptr;
  v9 = v8;
  if ( v8 )
  {
    v10 = strlen(v8);
    v11 = v10 + 1;
    v12 = v10;
    v19 = (void *)qvector_reserve();
    *(_QWORD *)&v20 = v11;
    memmove(v19, v9, v12);
    *((_BYTE *)v19 + v12) = 0;
  }
  v22 = 0;
  v21 = 0;
  v13 = sub_1679B0(&v21, v18, (__int64)&v19, 0.0, a3);
  if ( v13 == 1 )
  {
    sub_8F730(
      (__int64)"BUTTON CANCEL NONE\n"
               "Find a register value\n"
               "Address :%$\n"
               "Register:%q\n"
               "The value of the register before executing the instruction:\n"
               "%q",
      &v18,
      &v19,
      &v21);
    result = 1;
  }
  else if ( v13 == 2 )
  {
    result = 0;
  }
  else
  {
    v14 = v21;
    if ( *((_QWORD *)&v22 + 1) <= 3u )
    {
      v21 = qvector_reserve();
      v14 = v21;
    }
    *(_QWORD *)&v22 = 4;
    *(_WORD *)v14 = 11822;
    *(_BYTE *)(v14 + 2) = 46;
    *(_BYTE *)(v21 + 3) = 0;
    result = (unsigned int)sub_8F730(
                             (__int64)"BUTTON YES Search\n"
                                      "Find a register value\n"
                                      "%/%*Address :%$\n"
                                      "<#The register to look for#~R~egister:q1::50::>\n"
                                      "The value of the register before executing the instruction:\n"
                                      "%2q",
                             sub_1685B0,
                             &v18,
                             &v18,
                             &v19,
                             &v21) != 1;
  }
  if ( v21 )
  {
    v16 = result;
    *(_QWORD *)&v22 = 0;
    qfree();
    result = v16;
  }
  if ( v19 )
  {
    v17 = result;
    *(_QWORD *)&v20 = 0;
    qfree();
    return v17;
  }
  return result;
}

