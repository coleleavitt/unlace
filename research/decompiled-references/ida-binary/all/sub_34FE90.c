unsigned __int64 __fastcall sub_34FE90(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r9
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  int v12; // ebx
  unsigned int v13; // esi
  int v14; // ebx
  unsigned __int16 v15; // ax
  int v16; // ebx
  char v17; // [rsp+0h] [rbp-18h]
  unsigned __int16 v18; // [rsp+2h] [rbp-16h] BYREF
  unsigned __int16 v19; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int16 v20; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  getinf(10);
  getinf(10);
  getinf(11);
  if ( (unsigned int)sub_1697D0(
                       (int)"Kernel options\n"
                            "%/<~T~race execution flow                            :C>\n"
                            "<~M~ark typical code sequences as code             :C>\n"
                            "<~L~ocate and create jump tables                   :C>\n"
                            "<Control flo~w~ to data segment is ignored         :C>\n"
                            "<~A~nalyse and create all xrefs                    :C>\n"
                            "<~D~elete instructions with no xrefs               :C>\n"
                            "<Create function ~i~f data xref data->code32 exists:C>\n"
                            "<Create ~f~unctions if call is present             :C>\n"
                            "<Create function ~t~ails                           :C>\n"
                            "<Create ~s~tack variables                          :C>\n"
                            "<Propagate ~s~tack argument information            :C>\n"
                            "<Propagate ~r~egister argument information         :C>\n"
                            "<Trace stack ~p~ointer                             :C>\n"
                            "<Perform full stack ~p~ointer analysis             :C>\n"
                            "<Perform '~n~o-return' analysis                    :C>\n"
                            "<Try to ~g~uess member function types              :C>>\n"
                            "<=:Options ~1~>\n"
                            "<Truncate ~f~unctions upon code deletion           :C>\n"
                            "<Create string literal if data ~x~ref exists       :C>\n"
                            "<Check for ~u~nicode strings                       :C>\n"
                            "<~C~reate offsets and segments using fixup info    :C>\n"
                            "<Create ~o~ffset if data xref to seg32 exists      :C>\n"
                            "<Convert ~3~2bit instruction operand to offset     :C>\n"
                            "<Automatically convert data to ~o~ffsets           :C>\n"
                            "<~U~se flirt signatures                            :C>\n"
                            "<Comment ~a~nonymous library functions             :C>\n"
                            "<~M~ultiple copy library function recognition      :C>\n"
                            "<Automatically ~h~ide library functions            :C>\n"
                            "<~R~ename jump functions as j_...                  :C>\n"
                            "<Rename ~e~mpty functions as nullsub_...           :C>\n"
                            "<Coagulate ~d~ata segments in the final pass       :C>\n"
                            "<~C~oagulate code segments in the final pass       :C>\n"
                            "<Make fi~n~al analysis pass                        :C>>\n"
                            "<=:Options ~2~>\n"
                            "<Enable ~E~H analysis           :C>\n"
                            "<Enable ~R~TTI analysis         :C>\n"
                            "<Enable ~m~acros                :C1>\n"
                            "<Merge ~s~trlits                :C>>\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "\n"
                            "<=:Options ~3~>\n",
                       (__int64)sub_34A8A0,
                       (__int64)&v18,
                       (__int64)&v19,
                       (__int64)&v20,
                       v8,
                       a1,
                       a2,
                       a3,
                       a4,
                       v9,
                       v10,
                       a7,
                       a8,
                       v17) == 1 )
  {
    v12 = v18;
    HIWORD(v13) = (unsigned int)getinf(10) >> 16;
    LOWORD(v13) = 0;
    setinf(10, v12 | v13);
    v14 = v19;
    v15 = getinf(10);
    setinf(10, (v14 << 16) | (unsigned int)v15);
    v16 = v20;
    HIWORD(v13) = (unsigned int)getinf(11) >> 16;
    LOWORD(v13) = 0;
    setinf(11, v16 | v13);
  }
  return v21 - __readfsqword(0x28u);
}
