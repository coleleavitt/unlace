__int64 __fastcall sub_3A9A00(
        unsigned int a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 module_data; // rbx
  __int64 (__fastcall *v12)(int, __int64 *, double, __m128, __m128, __m128, double, double, __m128, __m128); // rsi
  unsigned int v13; // r14d
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  char v16; // al
  const char *v17; // rdi
  unsigned int v18; // eax
  int *v20; // rax
  int v21; // r13d
  __int64 v22; // [rsp+0h] [rbp-50h] BYREF
  __int128 v23; // [rsp+8h] [rbp-48h]
  unsigned __int64 v24; // [rsp+18h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_8CD7F0);
  v23 = 0;
  v22 = 0;
  sub_169A50(
    &v22,
    (__int64)"AUTOSYNC\n"
             "ACTION ForceTypesAutoCompl\n"
             "%s\n"
             "%%/\n"
             "%%*\n"
             "<~N~ame      :q1::40::>\n"
             "<~F~ixed layout                :C17>>\n"
             "<Structure si~z~e:n2::8::>\n"
             "%s\n"
             "<#The type should be present in the list offered when creating variables in disassembly#~M~ake type choosab"
             "le :C>\n"
             "<~P~ack fields                 :C16>\n"
             "<#Tuples are returned from functions differently than structures#~Tuple                        :C19>%s\n"
             "\n"
             "\n"
             "\n"
             "\n"
             "\n"
             "\n"
             "\n"
             "%s\n"
             "<=:~S~truct>\n"
             "\n"
             "<~N~ame:q5::40::>\n"
             "<#Size (in bytes) of the enumeration#S~i~ze:b6::::>\n"
             "<~H~exadecimal:R11><Si~g~ned:C7>\n"
             "<~D~ecimal    :R12><Bit~m~ask:C8>>\n"
             "<~O~ctal      :R13>\n"
             "<~B~inary     :R14>\n"
             "<Characte~r~  :R15>>\n"
             "\n"
             "%s\n"
             "%s\n"
             "<=:~E~num>\n"
             "\n"
             "<%s:e10::50::>\n"
             "<=:~C~ syntax>100>",
    "Edit type",
    "<~A~lignment     :N3::4::>",
    ">\n",
    (const char *)&unk_5C2F25,
    (const char *)&unk_5C2F25,
    (const char *)&unk_5C2F25,
    "Type definition");
  v12 = (__int64 (__fastcall *)(int, __int64 *, double, __m128, __m128, __m128, double, double, __m128, __m128))a1;
  v13 = sub_3A7A00(module_data + 576, a1);
  if ( !(_BYTE)v13 )
    goto LABEL_8;
  v16 = *(_BYTE *)(module_data + 872);
  switch ( v16 )
  {
    case 29:
      goto LABEL_13;
    case 45:
      if ( *(int *)(module_data + 844) >= 0 )
        break;
      v20 = (int *)(module_data + 844);
      v21 = a2 + 1;
LABEL_15:
      *v20 = v21;
      break;
    case 13:
LABEL_13:
      if ( *(int *)(module_data + 840) >= 0 )
        break;
      v20 = (int *)(module_data + 840);
      v21 = 2 * a2;
      goto LABEL_15;
  }
  v17 = &s1;
  if ( (_QWORD)v23 )
    LODWORD(v17) = v22;
  v12 = sub_3A63A0;
  v18 = sub_1697D0(
          (int)v17,
          (__int64)sub_3A63A0,
          module_data + 576,
          module_data + 584,
          module_data + 608,
          module_data + 616,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v14,
          v15,
          a9,
          a10,
          (unsigned __int8)module_data + 112);
  LOBYTE(v18) = v18 != 0;
  v13 = v18;
LABEL_8:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)v12);
  }
  return v13;
}
