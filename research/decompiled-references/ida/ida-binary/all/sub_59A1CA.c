__int64 __fastcall sub_59A1CA(__int64 a1, __int64 *a2, char a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v14[16]; // [rsp+20h] [rbp-1030h] BYREF
  _BYTE v15[4102]; // [rsp+30h] [rbp-1020h] BYREF
  unsigned __int8 v16; // [rsp+1036h] [rbp-1Ah]
  char v17; // [rsp+1037h] [rbp-19h]
  __int64 v18; // [rsp+1038h] [rbp-18h]

  if ( a3 == 1 && a4 >= (unsigned __int64)sub_5986F2(a1 + 160) )
    __assert_fail(
      "!member || mapping_id < mappings_.size()",
      "src/client/linux/minidump_writer/linux_dumper.cc",
      0x146u,
      "bool google_breakpad::LinuxDumper::ElfFileIdentifierForMapping(const google_breakpad::MappingInfo&, bool, unsigned"
      " int, google_breakpad::wasteful_vector<unsigned char>&)");
  if ( sub_599E91((__int64)a2) )
  {
    return 0;
  }
  else if ( (unsigned int)sub_5ADAC7((char *)a2 + 41, "linux-gate.so") )
  {
    if ( (unsigned __int8)sub_59A7A4(a1, a2, v15) != 1 )
    {
      return 0;
    }
    else
    {
      v17 = sub_59B846(a1, v15);
      sub_5AE2B0(v14, v15, 0);
      if ( !sub_59BD66(v14) || (unsigned __int64)sub_59BD80(v14) <= 3 )
      {
        v5 = 0;
      }
      else
      {
        v8 = sub_59BD66(v14);
        v16 = sub_5ACC54(v8, a5);
        if ( v16 && a3 && v17 )
        {
          v9 = *(_QWORD *)sub_59C126(a1 + 160, a4);
          *(_BYTE *)(v9 + sub_5ADA92((char *)a2 + 41) - 10 + 41) = 0;
        }
        v5 = v16;
      }
      sub_5AE2EA(v14);
    }
  }
  else
  {
    v18 = 0;
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 == (unsigned int)sub_599C46() )
    {
      v18 = *a2;
    }
    else
    {
      v18 = sub_5933C0((_QWORD *)(a1 + 72), a2[1]);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        v18,
        *(unsigned int *)(a1 + 8),
        *a2,
        a2[1]);
    }
    return (unsigned int)sub_5ACC54(v18, a5);
  }
  return v5;
}
