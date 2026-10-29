__int64 __fastcall sub_7B9CD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = a1;
  v4 = operator new(0x28u);
  *(_BYTE *)(v4 + 8) = 31;
  v5 = v4;
  v6 = v4;
  *(_QWORD *)v4 = &off_2B11A70;
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  if ( !a1 || (unsigned __int8)sub_7BEC40(v4, v8, a2, a3) )
    return v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0;
}

