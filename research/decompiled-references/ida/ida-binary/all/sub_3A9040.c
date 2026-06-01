__int64 __fastcall add_type_form_data_t__::vfunc_6(__int64 a1)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_169A50(
    (__int64 *)a1,
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
    "Add type",
    (const char *)&unk_5C2F25,
    "\n<Create ~u~nion        :C18>>",
    "<~I~mport standard structure:k:0:::>",
    "<Import standard enum by en~u~m name  :k:0:::>",
    "<Import standard enum by s~y~mbol name:k:1:::>",
    "Please enter new type declaration");
  return a1;
}
