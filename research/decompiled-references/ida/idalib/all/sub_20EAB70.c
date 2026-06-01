char *__fastcall sub_20EAB70(int a1, int a2)
{
  char **v2; // rcx
  char **v3; // rdi
  char **v6; // rdi
  int v7; // edx
  char **v8; // rsi

  switch ( a1 )
  {
    case 0:
      j__strlen("allocate");
      return "allocate";
    case 1:
      j__strlen("allocators");
      return (char *)"allocators";
    case 2:
      j__strlen("assume");
      return "assume";
    case 3:
      j__strlen("assumes");
      return (char *)"assumes";
    case 4:
      j__strlen("atomic");
      return "atomic";
    case 5:
      j__strlen("barrier");
      return "barrier";
    case 6:
      j__strlen("begin assumes");
      return "begin assumes";
    case 7:
      v6 = &off_2BE8C60;
      v7 = a2;
      v8 = (char **)&unk_2BE8C90;
      goto LABEL_118;
    case 8:
      v6 = &off_2BE8C20;
      v7 = a2;
      v8 = (char **)&unk_2BE8C50;
      goto LABEL_118;
    case 9:
      j__strlen("cancel");
      return "cancel";
    case 10:
      v6 = &off_2BE8BE0;
      v7 = a2;
      v8 = (char **)&unk_2BE8C10;
      goto LABEL_118;
    case 11:
      j__strlen("critical");
      return "critical";
    case 12:
      v6 = &off_2BE8BA0;
      v7 = a2;
      v8 = (char **)&unk_2BE8BD0;
      goto LABEL_118;
    case 13:
      v6 = &off_2BE8B60;
      v7 = a2;
      v8 = (char **)&unk_2BE8B90;
      goto LABEL_118;
    case 14:
      v6 = (char **)&off_2BE8B20;
      v7 = a2;
      v8 = (char **)&unk_2BE8B50;
      goto LABEL_118;
    case 15:
      v6 = (char **)&off_2BE8AE0;
      v7 = a2;
      v8 = (char **)&unk_2BE8B10;
      goto LABEL_118;
    case 16:
      v6 = (char **)&off_2BE8AA0;
      v7 = a2;
      v8 = (char **)&unk_2BE8AD0;
      goto LABEL_118;
    case 17:
      j__strlen("depobj");
      return "depobj";
    case 18:
      j__strlen("distribute");
      return "distribute";
    case 19:
      j__strlen("distribute parallel do");
      return (char *)"distribute parallel do";
    case 20:
      j__strlen("distribute parallel do simd");
      return "distribute parallel do simd";
    case 21:
      j__strlen("distribute parallel for");
      return (char *)"distribute parallel for";
    case 22:
      j__strlen("distribute parallel for simd");
      return "distribute parallel for simd";
    case 23:
      j__strlen("distribute simd");
      return "distribute simd";
    case 24:
      j__strlen("do");
      return (char *)"do";
    case 25:
      j__strlen("do simd");
      return (char *)"do simd";
    case 26:
      j__strlen("end assumes");
      return "end assumes";
    case 27:
      v6 = &off_2BE8A60;
      v7 = a2;
      v8 = (char **)&unk_2BE8A90;
      goto LABEL_118;
    case 28:
      v6 = &off_2BE8A20;
      v7 = a2;
      v8 = (char **)&unk_2BE8A50;
      goto LABEL_118;
    case 29:
      j__strlen("end do");
      return "end do";
    case 30:
      j__strlen("end do simd");
      return "end do simd";
    case 31:
      j__strlen("end scope");
      return "end scope";
    case 32:
      j__strlen("end sections");
      return "end sections";
    case 33:
      j__strlen("end single");
      return "end single";
    case 34:
      j__strlen("end workshare");
      return "end workshare";
    case 35:
      j__strlen("error");
      return "error";
    case 36:
      j__strlen("flush");
      return "flush";
    case 37:
      j__strlen("for");
      return (char *)"for";
    case 38:
      j__strlen("for simd");
      return (char *)"for simd";
    case 39:
      j__strlen("interchange");
      return "interchange";
    case 40:
      j__strlen("masked taskloop");
      return (char *)"masked taskloop";
    case 41:
      j__strlen("masked taskloop simd");
      return (char *)"masked taskloop simd";
    case 42:
      j__strlen("master");
      return "master";
    case 43:
      j__strlen("master taskloop");
      return (char *)"master taskloop";
    case 44:
      j__strlen("master taskloop simd");
      return (char *)"master taskloop simd";
    case 45:
      j__strlen("metadirective");
      return "metadirective";
    case 46:
      j__strlen("nothing");
      return "nothing";
    case 47:
      j__strlen("ordered");
      return "ordered";
    case 48:
      j__strlen("parallel");
      return "parallel";
    case 49:
      j__strlen("parallel do");
      return (char *)"parallel do";
    case 50:
      j__strlen("parallel do simd");
      return (char *)"parallel do simd";
    case 51:
      j__strlen("parallel for");
      return (char *)"parallel for";
    case 52:
      j__strlen("parallel for simd");
      return (char *)"parallel for simd";
    case 53:
      j__strlen("parallel masked");
      return "parallel masked";
    case 54:
      j__strlen("parallel masked taskloop");
      return "parallel masked taskloop";
    case 55:
      j__strlen("parallel masked taskloop simd");
      return "parallel masked taskloop simd";
    case 56:
      j__strlen("parallel master");
      return "parallel master";
    case 57:
      j__strlen("parallel master taskloop");
      return "parallel master taskloop";
    case 58:
      j__strlen("parallel master taskloop simd");
      return "parallel master taskloop simd";
    case 59:
      j__strlen("parallel sections");
      return "parallel sections";
    case 60:
      j__strlen("parallel workshare");
      return "parallel workshare";
    case 61:
      j__strlen("requires");
      return "requires";
    case 62:
      j__strlen("reverse");
      return "reverse";
    case 63:
      j__strlen("scan");
      return "scan";
    case 64:
      j__strlen("scope");
      return (char *)"scope";
    case 65:
      j__strlen("section");
      return "section";
    case 66:
      j__strlen("sections");
      return (char *)"sections";
    case 67:
      j__strlen("simd");
      return (char *)"simd";
    case 68:
      j__strlen("single");
      return (char *)"single";
    case 69:
      j__strlen("stripe");
      return "stripe";
    case 70:
      j__strlen("target");
      return "target";
    case 71:
      v6 = (char **)&off_2BE89E0;
      v7 = a2;
      v8 = (char **)&unk_2BE8A10;
      goto LABEL_118;
    case 72:
      v6 = (char **)&off_2BE89A0;
      v7 = a2;
      v8 = (char **)&unk_2BE89D0;
      goto LABEL_118;
    case 73:
      v6 = (char **)&off_2BE8960;
      v7 = a2;
      v8 = (char **)&unk_2BE8990;
      goto LABEL_118;
    case 74:
      j__strlen("target parallel");
      return "target parallel";
    case 75:
      j__strlen("target parallel do");
      return "target parallel do";
    case 76:
      j__strlen("target parallel do simd");
      return "target parallel do simd";
    case 77:
      j__strlen("target parallel for");
      return "target parallel for";
    case 78:
      j__strlen("target parallel for simd");
      return "target parallel for simd";
    case 79:
      j__strlen("target simd");
      return "target simd";
    case 80:
      j__strlen("target teams");
      return "target teams";
    case 81:
      j__strlen("target teams distribute");
      return "target teams distribute";
    case 82:
      j__strlen("target teams distribute parallel do");
      return "target teams distribute parallel do";
    case 83:
      j__strlen("target teams distribute parallel do simd");
      return "target teams distribute parallel do simd";
    case 84:
      j__strlen("target teams distribute parallel for");
      return "target teams distribute parallel for";
    case 85:
      j__strlen("target teams distribute parallel for simd");
      return "target teams distribute parallel for simd";
    case 86:
      j__strlen("target teams distribute simd");
      return "target teams distribute simd";
    case 87:
      v6 = (char **)&off_2BE8920;
      v7 = a2;
      v8 = (char **)&unk_2BE8950;
LABEL_118:
      v2 = v6;
      if ( v6 == v8 )
        return nullptr;
      if ( v7 <= *((_DWORD *)v6 + 5) && v7 >= *((_DWORD *)v6 + 4) )
        return *v2;
      v3 = v6 + 3;
      break;
    case 88:
      j__strlen("task");
      return "task";
    case 89:
      j__strlen("taskgroup");
      return "taskgroup";
    case 90:
      j__strlen("taskloop");
      return (char *)"taskloop";
    case 91:
      j__strlen("taskloop simd");
      return (char *)"taskloop simd";
    case 92:
      j__strlen("taskwait");
      return "taskwait";
    case 93:
      j__strlen("taskyield");
      return "taskyield";
    case 94:
      j__strlen("teams");
      return "teams";
    case 95:
      j__strlen("teams distribute");
      return "teams distribute";
    case 96:
      j__strlen("teams distribute parallel do");
      return "teams distribute parallel do";
    case 97:
      j__strlen("teams distribute parallel do simd");
      return "teams distribute parallel do simd";
    case 98:
      j__strlen("teams distribute parallel for");
      return "teams distribute parallel for";
    case 99:
      j__strlen("teams distribute parallel for simd");
      return "teams distribute parallel for simd";
    case 100:
      j__strlen("teams distribute simd");
      return (char *)"teams distribute simd";
    case 101:
      j__strlen("threadprivate");
      return "threadprivate";
    case 102:
      j__strlen("tile");
      return "tile";
    case 103:
      j__strlen("unknown");
      return "unknown";
    case 104:
      j__strlen("unroll");
      return (char *)"unroll";
    case 105:
      j__strlen("workshare");
      return (char *)"workshare";
    case 106:
      j__strlen("dispatch");
      return "dispatch";
    case 107:
      j__strlen("interop");
      return "interop";
    case 108:
      j__strlen("loop");
      return "loop";
    case 109:
      j__strlen("masked");
      return "masked";
    case 110:
      j__strlen("parallel loop");
      return "parallel loop";
    case 111:
      j__strlen("target loop");
      return "target loop";
    case 112:
      j__strlen("target parallel loop");
      return "target parallel loop";
    case 113:
      j__strlen("target teams loop");
      return "target teams loop";
    case 114:
      j__strlen("teams loop");
      return "teams loop";
  }
  while ( 1 )
  {
    v2 = v3;
    if ( v3 == v8 )
      break;
    v3 += 3;
    if ( v7 <= *((_DWORD *)v2 + 5) && v7 >= *((_DWORD *)v2 + 4) )
      return *v2;
  }
  return nullptr;
}
