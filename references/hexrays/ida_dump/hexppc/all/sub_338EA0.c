__int64 sub_338EA0()
{
  __int64 module_data; // rbx
  __int16 v2; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v2 = *(_DWORD *)(module_data + 604);
  if ( (unsigned int)sub_338C80(
                       (__int64)"Hex-Rays Decompiler Options 1\n"
                                "\n"
                                "<#Generate JUMPOUT() functions instead of failing the decompilation because of out-of-fu"
                                "nction control flow#Use ~J~UMPOUT() for out-of-function jumps:C>\n"
                                "<#Print casts in the output text#~D~isplay casts:C>\n"
                                "<#Unordered floating point comparisons are usually not used by compilers#Hide ~u~nordere"
                                "d fpu comparisons:C>\n"
                                "<#Without intrinsic functions the SSE instructions are displayed using inline assembly#U"
                                "se ~S~SE intrinsic functions:C>\n"
                                "<#Overlapping local variables generate a warning instead of failing the decompilation#Ig"
                                "nore ~o~verlapped variables:C>\n"
                                "<#Fast structural analysis generates less number of nested if-statements but may occasio"
                                "nally produce some unnecessary gotos#Use ~f~ast structural analysis:C>\n"
                                "<#Only print string literals if they reside in read-only segments (otherwise print any s"
                                "tring items as literals)#Print only ~c~onstant string literals:C>\n"
                                "<#Convert signed comparisons of unsigned variables with zero into checks of the sign bit"
                                "#Convert signed comparisons to ~b~it operations:C>\n"
                                "<#Reduce number of gotos by duplicating code#Un-merge ~t~ail branch optimizations:C>\n"
                                "<#Always use curly braces for if,for,while (as in perl)#~K~eep curly braces for single-s"
                                "tatement blocks:C>\n"
                                "<#Expressions like &a < &b will be optimized#Optimize away ~a~ddress comparisons:C>\n"
                                "<#Print casts from string literals to pointers to char/uchar#Display string ~l~iteral ca"
                                "sts:C>\n"
                                "<##Pressing '~E~sc' closes the view:C>\n"
                                "<#Assume all functions spoil flag registers ZF,CF,SF,OF,PF#Assume all functions spoil fl"
                                "a~g~s:C>\n"
                                "<#Keep all indirect memory reads so as not to lose possible invalid address access#Keep "
                                "all indirect memory ~r~eads:C>\n"
                                "<#Keep code that sets up and removes exception frames, e.g. calls to _Unwind_SjLj_Regist"
                                "er#Keep e~x~ception related code:C>>\n",
                       &v2) )
    *(_WORD *)(module_data + 604) = v2;
  return 0;
}
