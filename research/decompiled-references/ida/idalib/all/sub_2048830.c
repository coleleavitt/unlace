char *__fastcall sub_2048830(int a1)
{
  char *v1; // rcx

  switch ( a1 )
  {
    case 0:
      j__strlen("none");
      v1 = "none";
      break;
    case 1:
      j__strlen("allocalign");
      v1 = "allocalign";
      break;
    case 2:
      j__strlen("allocptr");
      v1 = "allocptr";
      break;
    case 3:
      j__strlen("alwaysinline");
      v1 = "alwaysinline";
      break;
    case 4:
      j__strlen("builtin");
      v1 = "builtin";
      break;
    case 5:
      j__strlen("cold");
      v1 = "cold";
      break;
    case 6:
      j__strlen("convergent");
      v1 = "convergent";
      break;
    case 7:
      j__strlen("coro_only_destroy_when_complete");
      v1 = "coro_only_destroy_when_complete";
      break;
    case 8:
      j__strlen("coro_elide_safe");
      v1 = "coro_elide_safe";
      break;
    case 9:
      j__strlen("dead_on_return");
      v1 = "dead_on_return";
      break;
    case 10:
      j__strlen("dead_on_unwind");
      v1 = "dead_on_unwind";
      break;
    case 11:
      j__strlen("disable_sanitizer_instrumentation");
      v1 = "disable_sanitizer_instrumentation";
      break;
    case 12:
      j__strlen("fn_ret_thunk_extern");
      v1 = "fn_ret_thunk_extern";
      break;
    case 13:
      j__strlen("hot");
      v1 = "hot";
      break;
    case 14:
      j__strlen("hybrid_patchable");
      v1 = "hybrid_patchable";
      break;
    case 15:
      j__strlen("immarg");
      v1 = "immarg";
      break;
    case 16:
      j__strlen("inreg");
      v1 = "inreg";
      break;
    case 17:
      j__strlen("inlinehint");
      v1 = "inlinehint";
      break;
    case 18:
      j__strlen("jumptable");
      v1 = "jumptable";
      break;
    case 19:
      j__strlen("minsize");
      v1 = "minsize";
      break;
    case 20:
      j__strlen("mustprogress");
      v1 = "mustprogress";
      break;
    case 21:
      j__strlen("naked");
      v1 = "naked";
      break;
    case 22:
      j__strlen("nest");
      v1 = "nest";
      break;
    case 23:
      j__strlen("noalias");
      v1 = (char *)"noalias";
      break;
    case 24:
      j__strlen("nobuiltin");
      v1 = "nobuiltin";
      break;
    case 25:
      j__strlen("nocallback");
      v1 = "nocallback";
      break;
    case 26:
      j__strlen("nocf_check");
      v1 = "nocf_check";
      break;
    case 27:
      j__strlen("nodivergencesource");
      v1 = "nodivergencesource";
      break;
    case 28:
      j__strlen("noduplicate");
      v1 = "noduplicate";
      break;
    case 29:
      j__strlen("noext");
      v1 = "noext";
      break;
    case 30:
      j__strlen("nofree");
      v1 = "nofree";
      break;
    case 31:
      j__strlen("noimplicitfloat");
      v1 = "noimplicitfloat";
      break;
    case 32:
      j__strlen("noinline");
      v1 = "noinline";
      break;
    case 33:
      j__strlen("nomerge");
      v1 = "nomerge";
      break;
    case 34:
      j__strlen("noprofile");
      v1 = "noprofile";
      break;
    case 35:
      j__strlen("norecurse");
      v1 = "norecurse";
      break;
    case 36:
      j__strlen("noredzone");
      v1 = "noredzone";
      break;
    case 37:
      j__strlen("noreturn");
      v1 = "noreturn";
      break;
    case 38:
      j__strlen("nosanitize_bounds");
      v1 = "nosanitize_bounds";
      break;
    case 39:
      j__strlen("nosanitize_coverage");
      v1 = "nosanitize_coverage";
      break;
    case 40:
      j__strlen("nosync");
      v1 = "nosync";
      break;
    case 41:
      j__strlen("noundef");
      v1 = "noundef";
      break;
    case 42:
      j__strlen("nounwind");
      v1 = "nounwind";
      break;
    case 43:
      j__strlen("nonlazybind");
      v1 = "nonlazybind";
      break;
    case 44:
      j__strlen("nonnull");
      v1 = "nonnull";
      break;
    case 45:
      j__strlen("null_pointer_is_valid");
      v1 = "null_pointer_is_valid";
      break;
    case 46:
      j__strlen("optforfuzzing");
      v1 = "optforfuzzing";
      break;
    case 47:
      j__strlen("optdebug");
      v1 = "optdebug";
      break;
    case 48:
      j__strlen("optsize");
      v1 = "optsize";
      break;
    case 49:
      j__strlen("optnone");
      v1 = "optnone";
      break;
    case 50:
      j__strlen("presplitcoroutine");
      v1 = "presplitcoroutine";
      break;
    case 51:
      j__strlen("readnone");
      v1 = "readnone";
      break;
    case 52:
      j__strlen("readonly");
      v1 = "readonly";
      break;
    case 53:
      j__strlen("returned");
      v1 = "returned";
      break;
    case 54:
      j__strlen("returns_twice");
      v1 = "returns_twice";
      break;
    case 55:
      j__strlen("signext");
      v1 = "signext";
      break;
    case 56:
      j__strlen("safestack");
      v1 = "safestack";
      break;
    case 57:
      j__strlen("sanitize_address");
      v1 = "sanitize_address";
      break;
    case 58:
      j__strlen("sanitize_hwaddress");
      v1 = "sanitize_hwaddress";
      break;
    case 59:
      j__strlen("sanitize_memtag");
      v1 = "sanitize_memtag";
      break;
    case 60:
      j__strlen("sanitize_memory");
      v1 = "sanitize_memory";
      break;
    case 61:
      j__strlen("sanitize_numerical_stability");
      v1 = "sanitize_numerical_stability";
      break;
    case 62:
      j__strlen("sanitize_realtime");
      v1 = "sanitize_realtime";
      break;
    case 63:
      j__strlen("sanitize_realtime_blocking");
      v1 = "sanitize_realtime_blocking";
      break;
    case 64:
      j__strlen("sanitize_thread");
      v1 = "sanitize_thread";
      break;
    case 65:
      j__strlen("sanitize_type");
      v1 = "sanitize_type";
      break;
    case 66:
      j__strlen("shadowcallstack");
      v1 = "shadowcallstack";
      break;
    case 67:
      j__strlen("skipprofile");
      v1 = "skipprofile";
      break;
    case 68:
      j__strlen("speculatable");
      v1 = "speculatable";
      break;
    case 69:
      j__strlen("speculative_load_hardening");
      v1 = "speculative_load_hardening";
      break;
    case 70:
      j__strlen("ssp");
      v1 = "ssp";
      break;
    case 71:
      j__strlen("sspreq");
      v1 = "sspreq";
      break;
    case 72:
      j__strlen("sspstrong");
      v1 = "sspstrong";
      break;
    case 73:
      j__strlen("strictfp");
      v1 = "strictfp";
      break;
    case 74:
      j__strlen("swiftasync");
      v1 = "swiftasync";
      break;
    case 75:
      j__strlen("swifterror");
      v1 = "swifterror";
      break;
    case 76:
      j__strlen("swiftself");
      v1 = "swiftself";
      break;
    case 77:
      j__strlen("willreturn");
      v1 = "willreturn";
      break;
    case 78:
      j__strlen("writable");
      v1 = "writable";
      break;
    case 79:
      j__strlen("writeonly");
      v1 = "writeonly";
      break;
    case 80:
      j__strlen("zeroext");
      v1 = "zeroext";
      break;
    case 81:
      j__strlen("byref");
      v1 = "byref";
      break;
    case 82:
      j__strlen("byval");
      v1 = "byval";
      break;
    case 83:
      j__strlen("elementtype");
      v1 = "elementtype";
      break;
    case 84:
      j__strlen("inalloca");
      v1 = "inalloca";
      break;
    case 85:
      j__strlen("preallocated");
      v1 = "preallocated";
      break;
    case 86:
      j__strlen("sret");
      v1 = "sret";
      break;
    case 87:
      j__strlen("align");
      v1 = "align";
      break;
    case 88:
      j__strlen("allockind");
      v1 = "allockind";
      break;
    case 89:
      j__strlen("allocsize");
      v1 = "allocsize";
      break;
    case 90:
      j__strlen("captures");
      v1 = "captures";
      break;
    case 91:
      j__strlen("dereferenceable");
      v1 = "dereferenceable";
      break;
    case 92:
      j__strlen("dereferenceable_or_null");
      v1 = "dereferenceable_or_null";
      break;
    case 93:
      j__strlen("memory");
      v1 = "memory";
      break;
    case 94:
      j__strlen("nofpclass");
      v1 = "nofpclass";
      break;
    case 95:
      j__strlen("alignstack");
      v1 = "alignstack";
      break;
    case 96:
      j__strlen("uwtable");
      v1 = "uwtable";
      break;
    case 97:
      j__strlen("vscale_range");
      v1 = "vscale_range";
      break;
    case 98:
      j__strlen("range");
      v1 = "range";
      break;
    case 99:
      j__strlen("initializes");
      v1 = "initializes";
      break;
  }
  return v1;
}
