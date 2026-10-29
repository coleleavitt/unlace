__int64 __fastcall sub_20F47A0(int a1, int a2, const void *a3, size_t a4)
{
  unsigned int v4; // r12d

  if ( a1 == 2 )
  {
    v4 = 73;
    if ( a2 == 15 )
      return v4;
  }
  if ( a1 == 3 )
  {
    v4 = 74;
    if ( a2 == 16 )
      return v4;
  }
  v4 = 0;
  switch ( a1 )
  {
    case 0:
      return v4;
    case 1:
      if ( j__strlen("target") == a4 )
      {
        v4 = 1;
        if ( !a4 )
          return v4;
        v4 = 1;
        if ( !memcmp("target", a3, a4) )
          return v4;
        if ( j__strlen("teams") != a4 )
          goto LABEL_23;
      }
      else
      {
        if ( j__strlen("teams") != a4 )
        {
LABEL_23:
          if ( j__strlen("parallel") != a4 )
            goto LABEL_24;
          v4 = 3;
          if ( !a4 )
            return v4;
          goto LABEL_86;
        }
        v4 = 2;
        if ( !a4 )
          return v4;
      }
      v4 = 2;
      if ( !memcmp("teams", a3, a4) )
        return v4;
      if ( j__strlen("parallel") != a4 )
      {
LABEL_24:
        if ( j__strlen("for") == a4 )
        {
          v4 = 4;
          if ( !a4 )
            return v4;
          goto LABEL_88;
        }
        goto LABEL_93;
      }
LABEL_86:
      v4 = 3;
      if ( !memcmp("parallel", a3, a4) )
        return v4;
      if ( j__strlen("for") == a4 )
      {
LABEL_88:
        v4 = 4;
        if ( !memcmp("for", a3, a4) )
          return v4;
        if ( j__strlen("simd") != a4 )
        {
LABEL_90:
          v4 = 0;
          if ( j__strlen("dispatch") != a4 )
            return v4;
          v4 = 72;
          if ( !a4 )
            return v4;
          return memcmp("dispatch", a3, a4) == 0 ? 0x48 : 0;
        }
LABEL_95:
        v4 = 5;
        if ( !memcmp("simd", a3, a4) )
          return v4;
        v4 = 0;
        if ( j__strlen("dispatch") != a4 )
          return v4;
        return memcmp("dispatch", a3, a4) == 0 ? 0x48 : 0;
      }
LABEL_93:
      if ( j__strlen("simd") != a4 )
        goto LABEL_90;
      v4 = 5;
      if ( !a4 )
        return v4;
      goto LABEL_95;
    case 2:
      if ( j__strlen("host") == a4 )
      {
        v4 = 6;
        if ( !a4 || !memcmp("host", a3, a4) )
          return v4;
        if ( j__strlen("nohost") == a4 )
        {
LABEL_31:
          v4 = 7;
          if ( !memcmp("nohost", a3, a4) )
            return v4;
          if ( j__strlen("cpu") == a4 )
          {
LABEL_33:
            v4 = 8;
            if ( !memcmp("cpu", a3, a4) )
              return v4;
            if ( j__strlen("gpu") == a4 )
            {
LABEL_35:
              v4 = 9;
              if ( !memcmp("gpu", a3, a4) )
                return v4;
              if ( j__strlen("fpga") == a4 )
              {
LABEL_37:
                v4 = 10;
                if ( !memcmp("fpga", a3, a4) )
                  return v4;
                if ( j__strlen("any") == a4 )
                {
LABEL_39:
                  v4 = 11;
                  if ( !memcmp("any", a3, a4) )
                    return v4;
                  if ( j__strlen("arm") == a4 )
                  {
LABEL_41:
                    v4 = 12;
                    if ( !memcmp("arm", a3, a4) )
                      return v4;
                    if ( j__strlen("armeb") == a4 )
                    {
LABEL_43:
                      v4 = 13;
                      if ( !memcmp("armeb", a3, a4) )
                        return v4;
                      if ( j__strlen("aarch64") == a4 )
                      {
LABEL_45:
                        v4 = 14;
                        if ( !memcmp("aarch64", a3, a4) )
                          return v4;
                        if ( j__strlen("aarch64_be") == a4 )
                        {
LABEL_47:
                          v4 = 15;
                          if ( !memcmp("aarch64_be", a3, a4) )
                            return v4;
                          if ( j__strlen("aarch64_32") == a4 )
                          {
LABEL_49:
                            v4 = 16;
                            if ( !memcmp("aarch64_32", a3, a4) )
                              return v4;
                            if ( j__strlen("ppc") == a4 )
                            {
LABEL_51:
                              v4 = 17;
                              if ( !memcmp("ppc", a3, a4) )
                                return v4;
                              if ( j__strlen("ppcle") == a4 )
                              {
LABEL_53:
                                v4 = 18;
                                if ( !memcmp("ppcle", a3, a4) )
                                  return v4;
                                if ( j__strlen("ppc64") == a4 )
                                {
LABEL_55:
                                  v4 = 19;
                                  if ( !memcmp("ppc64", a3, a4) )
                                    return v4;
                                  if ( j__strlen("ppc64le") == a4 )
                                  {
LABEL_57:
                                    v4 = 20;
                                    if ( !memcmp("ppc64le", a3, a4) )
                                      return v4;
                                    if ( j__strlen("x86") == a4 )
                                    {
LABEL_59:
                                      v4 = 21;
                                      if ( !memcmp("x86", a3, a4) )
                                        return v4;
                                      if ( j__strlen("x86_64") == a4 )
                                      {
LABEL_61:
                                        v4 = 22;
                                        if ( !memcmp("x86_64", a3, a4) )
                                          return v4;
                                        if ( j__strlen("amdgcn") == a4 )
                                        {
LABEL_63:
                                          v4 = 23;
                                          if ( !memcmp("amdgcn", a3, a4) )
                                            return v4;
                                          if ( j__strlen("nvptx") == a4 )
                                          {
LABEL_65:
                                            v4 = 24;
                                            if ( !memcmp("nvptx", a3, a4) )
                                              return v4;
                                            if ( j__strlen("nvptx64") == a4 )
                                            {
LABEL_67:
                                              v4 = 25;
                                              if ( !memcmp("nvptx64", a3, a4) )
                                                return v4;
                                              if ( j__strlen("spirv64") != a4 )
                                              {
LABEL_69:
                                                v4 = 0;
                                                if ( j__strlen("<any, entirely target dependent>") != a4 )
                                                  return v4;
                                                v4 = 73;
                                                if ( !a4 )
                                                  return v4;
                                                return memcmp("<any, entirely target dependent>", a3, a4) == 0
                                                     ? 0x49
                                                     : 0;
                                              }
LABEL_196:
                                              v4 = 26;
                                              if ( !memcmp("spirv64", a3, a4) )
                                                return v4;
                                              v4 = 0;
                                              if ( j__strlen("<any, entirely target dependent>") != a4 )
                                                return v4;
                                              return memcmp("<any, entirely target dependent>", a3, a4) == 0 ? 0x49 : 0;
                                            }
                                            goto LABEL_194;
                                          }
                                          goto LABEL_191;
                                        }
                                        goto LABEL_188;
                                      }
                                      goto LABEL_185;
                                    }
                                    goto LABEL_182;
                                  }
                                  goto LABEL_179;
                                }
                                goto LABEL_176;
                              }
                              goto LABEL_173;
                            }
                            goto LABEL_170;
                          }
                          goto LABEL_167;
                        }
                        goto LABEL_164;
                      }
                      goto LABEL_161;
                    }
                    goto LABEL_158;
                  }
                  goto LABEL_155;
                }
                goto LABEL_152;
              }
              goto LABEL_149;
            }
            goto LABEL_79;
          }
          goto LABEL_76;
        }
      }
      else if ( j__strlen("nohost") == a4 )
      {
        v4 = 7;
        if ( !a4 )
          return v4;
        goto LABEL_31;
      }
      if ( j__strlen("cpu") == a4 )
      {
        v4 = 8;
        if ( !a4 )
          return v4;
        goto LABEL_33;
      }
LABEL_76:
      if ( j__strlen("gpu") == a4 )
      {
        v4 = 9;
        if ( !a4 )
          return v4;
        goto LABEL_35;
      }
LABEL_79:
      if ( j__strlen("fpga") == a4 )
      {
        v4 = 10;
        if ( !a4 )
          return v4;
        goto LABEL_37;
      }
LABEL_149:
      if ( j__strlen("any") == a4 )
      {
        v4 = 11;
        if ( !a4 )
          return v4;
        goto LABEL_39;
      }
LABEL_152:
      if ( j__strlen("arm") == a4 )
      {
        v4 = 12;
        if ( !a4 )
          return v4;
        goto LABEL_41;
      }
LABEL_155:
      if ( j__strlen("armeb") == a4 )
      {
        v4 = 13;
        if ( !a4 )
          return v4;
        goto LABEL_43;
      }
LABEL_158:
      if ( j__strlen("aarch64") == a4 )
      {
        v4 = 14;
        if ( !a4 )
          return v4;
        goto LABEL_45;
      }
LABEL_161:
      if ( j__strlen("aarch64_be") == a4 )
      {
        v4 = 15;
        if ( !a4 )
          return v4;
        goto LABEL_47;
      }
LABEL_164:
      if ( j__strlen("aarch64_32") == a4 )
      {
        v4 = 16;
        if ( !a4 )
          return v4;
        goto LABEL_49;
      }
LABEL_167:
      if ( j__strlen("ppc") == a4 )
      {
        v4 = 17;
        if ( !a4 )
          return v4;
        goto LABEL_51;
      }
LABEL_170:
      if ( j__strlen("ppcle") == a4 )
      {
        v4 = 18;
        if ( !a4 )
          return v4;
        goto LABEL_53;
      }
LABEL_173:
      if ( j__strlen("ppc64") == a4 )
      {
        v4 = 19;
        if ( !a4 )
          return v4;
        goto LABEL_55;
      }
LABEL_176:
      if ( j__strlen("ppc64le") == a4 )
      {
        v4 = 20;
        if ( !a4 )
          return v4;
        goto LABEL_57;
      }
LABEL_179:
      if ( j__strlen("x86") == a4 )
      {
        v4 = 21;
        if ( !a4 )
          return v4;
        goto LABEL_59;
      }
LABEL_182:
      if ( j__strlen("x86_64") == a4 )
      {
        v4 = 22;
        if ( !a4 )
          return v4;
        goto LABEL_61;
      }
LABEL_185:
      if ( j__strlen("amdgcn") == a4 )
      {
        v4 = 23;
        if ( !a4 )
          return v4;
        goto LABEL_63;
      }
LABEL_188:
      if ( j__strlen("nvptx") == a4 )
      {
        v4 = 24;
        if ( !a4 )
          return v4;
        goto LABEL_65;
      }
LABEL_191:
      if ( j__strlen("nvptx64") == a4 )
      {
        v4 = 25;
        if ( !a4 )
          return v4;
        goto LABEL_67;
      }
LABEL_194:
      if ( j__strlen("spirv64") != a4 )
        goto LABEL_69;
      v4 = 26;
      if ( !a4 )
        return v4;
      goto LABEL_196;
    case 3:
      if ( j__strlen("host") == a4 )
      {
        v4 = 27;
        if ( !a4 || !memcmp("host", a3, a4) )
          return v4;
        if ( j__strlen("nohost") == a4 )
        {
LABEL_104:
          v4 = 28;
          if ( !memcmp("nohost", a3, a4) )
            return v4;
          if ( j__strlen("cpu") == a4 )
          {
LABEL_106:
            v4 = 29;
            if ( !memcmp("cpu", a3, a4) )
              return v4;
            if ( j__strlen("gpu") == a4 )
            {
LABEL_108:
              v4 = 30;
              if ( !memcmp("gpu", a3, a4) )
                return v4;
              if ( j__strlen("fpga") == a4 )
              {
LABEL_110:
                v4 = 31;
                if ( !memcmp("fpga", a3, a4) )
                  return v4;
                if ( j__strlen("any") == a4 )
                {
LABEL_112:
                  v4 = 32;
                  if ( !memcmp("any", a3, a4) )
                    return v4;
                  if ( j__strlen("number") == a4 )
                  {
LABEL_114:
                    v4 = 33;
                    if ( !memcmp("number", a3, a4) )
                      return v4;
                    if ( j__strlen("arm") == a4 )
                    {
LABEL_116:
                      v4 = 34;
                      if ( !memcmp("arm", a3, a4) )
                        return v4;
                      if ( j__strlen("armeb") == a4 )
                      {
LABEL_118:
                        v4 = 35;
                        if ( !memcmp("armeb", a3, a4) )
                          return v4;
                        if ( j__strlen("aarch64") == a4 )
                        {
LABEL_120:
                          v4 = 36;
                          if ( !memcmp("aarch64", a3, a4) )
                            return v4;
                          if ( j__strlen("aarch64_be") == a4 )
                          {
LABEL_122:
                            v4 = 37;
                            if ( !memcmp("aarch64_be", a3, a4) )
                              return v4;
                            if ( j__strlen("aarch64_32") == a4 )
                            {
LABEL_124:
                              v4 = 38;
                              if ( !memcmp("aarch64_32", a3, a4) )
                                return v4;
                              if ( j__strlen("ppc") == a4 )
                              {
LABEL_126:
                                v4 = 39;
                                if ( !memcmp("ppc", a3, a4) )
                                  return v4;
                                if ( j__strlen("ppcle") == a4 )
                                {
LABEL_128:
                                  v4 = 40;
                                  if ( !memcmp("ppcle", a3, a4) )
                                    return v4;
                                  if ( j__strlen("ppc64") == a4 )
                                  {
LABEL_130:
                                    v4 = 41;
                                    if ( !memcmp("ppc64", a3, a4) )
                                      return v4;
                                    if ( j__strlen("ppc64le") == a4 )
                                    {
LABEL_132:
                                      v4 = 42;
                                      if ( !memcmp("ppc64le", a3, a4) )
                                        return v4;
                                      if ( j__strlen("x86") == a4 )
                                      {
LABEL_134:
                                        v4 = 43;
                                        if ( !memcmp("x86", a3, a4) )
                                          return v4;
                                        if ( j__strlen("x86_64") == a4 )
                                        {
LABEL_136:
                                          v4 = 44;
                                          if ( !memcmp("x86_64", a3, a4) )
                                            return v4;
                                          if ( j__strlen("amdgcn") == a4 )
                                          {
LABEL_138:
                                            v4 = 45;
                                            if ( !memcmp("amdgcn", a3, a4) )
                                              return v4;
                                            if ( j__strlen("nvptx") == a4 )
                                            {
LABEL_140:
                                              v4 = 46;
                                              if ( !memcmp("nvptx", a3, a4) )
                                                return v4;
                                              if ( j__strlen("nvptx64") == a4 )
                                              {
LABEL_142:
                                                v4 = 47;
                                                if ( !memcmp("nvptx64", a3, a4) )
                                                  return v4;
                                                if ( j__strlen("spirv64") != a4 )
                                                {
LABEL_144:
                                                  if ( j__strlen("<any, entirely target dependent>") != a4 )
                                                    return 0;
                                                  v4 = 74;
                                                  if ( !a4 )
                                                    return v4;
                                                  return memcmp("<any, entirely target dependent>", a3, a4) == 0
                                                       ? 0x4A
                                                       : 0;
                                                }
LABEL_312:
                                                v4 = 48;
                                                if ( !memcmp("spirv64", a3, a4) )
                                                  return v4;
                                                v4 = 0;
                                                if ( j__strlen("<any, entirely target dependent>") != a4 )
                                                  return v4;
                                                return memcmp("<any, entirely target dependent>", a3, a4) == 0
                                                     ? 0x4A
                                                     : 0;
                                              }
                                              goto LABEL_310;
                                            }
                                            goto LABEL_307;
                                          }
                                          goto LABEL_304;
                                        }
                                        goto LABEL_301;
                                      }
                                      goto LABEL_298;
                                    }
                                    goto LABEL_295;
                                  }
                                  goto LABEL_241;
                                }
                                goto LABEL_238;
                              }
                              goto LABEL_235;
                            }
                            goto LABEL_232;
                          }
                          goto LABEL_229;
                        }
                        goto LABEL_226;
                      }
                      goto LABEL_223;
                    }
                    goto LABEL_220;
                  }
                  goto LABEL_217;
                }
                goto LABEL_214;
              }
              goto LABEL_211;
            }
            goto LABEL_208;
          }
          goto LABEL_205;
        }
      }
      else if ( j__strlen("nohost") == a4 )
      {
        v4 = 28;
        if ( !a4 )
          return v4;
        goto LABEL_104;
      }
      if ( j__strlen("cpu") == a4 )
      {
        v4 = 29;
        if ( !a4 )
          return v4;
        goto LABEL_106;
      }
LABEL_205:
      if ( j__strlen("gpu") == a4 )
      {
        v4 = 30;
        if ( !a4 )
          return v4;
        goto LABEL_108;
      }
LABEL_208:
      if ( j__strlen("fpga") == a4 )
      {
        v4 = 31;
        if ( !a4 )
          return v4;
        goto LABEL_110;
      }
LABEL_211:
      if ( j__strlen("any") == a4 )
      {
        v4 = 32;
        if ( !a4 )
          return v4;
        goto LABEL_112;
      }
LABEL_214:
      if ( j__strlen("number") == a4 )
      {
        v4 = 33;
        if ( !a4 )
          return v4;
        goto LABEL_114;
      }
LABEL_217:
      if ( j__strlen("arm") == a4 )
      {
        v4 = 34;
        if ( !a4 )
          return v4;
        goto LABEL_116;
      }
LABEL_220:
      if ( j__strlen("armeb") == a4 )
      {
        v4 = 35;
        if ( !a4 )
          return v4;
        goto LABEL_118;
      }
LABEL_223:
      if ( j__strlen("aarch64") == a4 )
      {
        v4 = 36;
        if ( !a4 )
          return v4;
        goto LABEL_120;
      }
LABEL_226:
      if ( j__strlen("aarch64_be") == a4 )
      {
        v4 = 37;
        if ( !a4 )
          return v4;
        goto LABEL_122;
      }
LABEL_229:
      if ( j__strlen("aarch64_32") == a4 )
      {
        v4 = 38;
        if ( !a4 )
          return v4;
        goto LABEL_124;
      }
LABEL_232:
      if ( j__strlen("ppc") == a4 )
      {
        v4 = 39;
        if ( !a4 )
          return v4;
        goto LABEL_126;
      }
LABEL_235:
      if ( j__strlen("ppcle") == a4 )
      {
        v4 = 40;
        if ( !a4 )
          return v4;
        goto LABEL_128;
      }
LABEL_238:
      if ( j__strlen("ppc64") == a4 )
      {
        v4 = 41;
        if ( !a4 )
          return v4;
        goto LABEL_130;
      }
LABEL_241:
      if ( j__strlen("ppc64le") == a4 )
      {
        v4 = 42;
        if ( !a4 )
          return v4;
        goto LABEL_132;
      }
LABEL_295:
      if ( j__strlen("x86") == a4 )
      {
        v4 = 43;
        if ( !a4 )
          return v4;
        goto LABEL_134;
      }
LABEL_298:
      if ( j__strlen("x86_64") == a4 )
      {
        v4 = 44;
        if ( !a4 )
          return v4;
        goto LABEL_136;
      }
LABEL_301:
      if ( j__strlen("amdgcn") == a4 )
      {
        v4 = 45;
        if ( !a4 )
          return v4;
        goto LABEL_138;
      }
LABEL_304:
      if ( j__strlen("nvptx") == a4 )
      {
        v4 = 46;
        if ( !a4 )
          return v4;
        goto LABEL_140;
      }
LABEL_307:
      if ( j__strlen("nvptx64") == a4 )
      {
        v4 = 47;
        if ( !a4 )
          return v4;
        goto LABEL_142;
      }
LABEL_310:
      if ( j__strlen("spirv64") != a4 )
        goto LABEL_144;
      v4 = 48;
      if ( !a4 )
        return v4;
      goto LABEL_312;
    case 4:
      if ( j__strlen("amd") == a4 )
      {
        v4 = 49;
        if ( !a4 || !memcmp("amd", a3, a4) )
          return v4;
        if ( j__strlen("arm") == a4 )
        {
LABEL_248:
          v4 = 50;
          if ( !memcmp("arm", a3, a4) )
            return v4;
          if ( j__strlen("bsc") == a4 )
          {
LABEL_250:
            v4 = 51;
            if ( !memcmp("bsc", a3, a4) )
              return v4;
            if ( j__strlen("cray") == a4 )
            {
LABEL_252:
              v4 = 52;
              if ( !memcmp("cray", a3, a4) )
                return v4;
              if ( j__strlen("fujitsu") == a4 )
              {
LABEL_254:
                v4 = 53;
                if ( !memcmp("fujitsu", a3, a4) )
                  return v4;
                if ( j__strlen("gnu") == a4 )
                {
LABEL_256:
                  v4 = 54;
                  if ( !memcmp("gnu", a3, a4) )
                    return v4;
                  if ( j__strlen("ibm") == a4 )
                  {
LABEL_258:
                    v4 = 55;
                    if ( !memcmp("ibm", a3, a4) )
                      return v4;
                    if ( j__strlen("intel") == a4 )
                    {
LABEL_260:
                      v4 = 56;
                      if ( !memcmp("intel", a3, a4) )
                        return v4;
                      if ( j__strlen("llvm") == a4 )
                      {
LABEL_262:
                        v4 = 57;
                        if ( !memcmp("llvm", a3, a4) )
                          return v4;
                        if ( j__strlen("nec") == a4 )
                        {
LABEL_264:
                          v4 = 58;
                          if ( !memcmp("nec", a3, a4) )
                            return v4;
                          if ( j__strlen("nvidia") == a4 )
                          {
LABEL_266:
                            v4 = 59;
                            if ( !memcmp("nvidia", a3, a4) )
                              return v4;
                            if ( j__strlen("pgi") == a4 )
                            {
LABEL_268:
                              v4 = 60;
                              if ( !memcmp("pgi", a3, a4) )
                                return v4;
                              if ( j__strlen("ti") == a4 )
                              {
LABEL_270:
                                v4 = 61;
                                if ( !memcmp("ti", a3, a4) )
                                  return v4;
                                if ( j__strlen("unknown") == a4 )
                                {
LABEL_272:
                                  v4 = 62;
                                  if ( !memcmp("unknown", a3, a4) )
                                    return v4;
                                  if ( j__strlen("match_all") == a4 )
                                  {
LABEL_274:
                                    v4 = 63;
                                    if ( !memcmp("match_all", a3, a4) )
                                      return v4;
                                    if ( j__strlen("match_any") == a4 )
                                    {
LABEL_276:
                                      v4 = 64;
                                      if ( !memcmp("match_any", a3, a4) )
                                        return v4;
                                      if ( j__strlen("match_none") == a4 )
                                      {
LABEL_278:
                                        v4 = 65;
                                        if ( !memcmp("match_none", a3, a4) )
                                          return v4;
                                        if ( j__strlen("disable_implicit_base") == a4 )
                                        {
LABEL_280:
                                          v4 = 66;
                                          if ( !memcmp("disable_implicit_base", a3, a4) )
                                            return v4;
                                          if ( j__strlen("allow_templates") == a4 )
                                          {
LABEL_282:
                                            v4 = 67;
                                            if ( !memcmp("allow_templates", a3, a4) )
                                              return v4;
                                            if ( j__strlen("bind_to_declaration") == a4 )
                                            {
LABEL_284:
                                              v4 = 68;
                                              if ( !memcmp("bind_to_declaration", a3, a4) )
                                                return v4;
                                              if ( j__strlen("unified_address") == a4 )
                                              {
LABEL_286:
                                                if ( !memcmp("unified_address", a3, a4) )
                                                  return 75;
                                                if ( j__strlen("unified_shared_memory") == a4 )
                                                {
LABEL_288:
                                                  if ( !memcmp("unified_shared_memory", a3, a4) )
                                                    return 76;
                                                  if ( j__strlen("reverse_offload") == a4 )
                                                  {
LABEL_290:
                                                    if ( !memcmp("reverse_offload", a3, a4) )
                                                      return 77;
                                                    if ( j__strlen("dynamic_allocators") == a4 )
                                                    {
LABEL_292:
                                                      if ( !memcmp("dynamic_allocators", a3, a4) )
                                                        return 78;
                                                      v4 = 0;
                                                      if ( j__strlen("atomic_default_mem_order") != a4 )
                                                        return v4;
                                                      return memcmp("atomic_default_mem_order", a3, a4) == 0 ? 0x4F : 0;
                                                    }
                                                    goto LABEL_390;
                                                  }
                                                  goto LABEL_387;
                                                }
                                                goto LABEL_381;
                                              }
                                              goto LABEL_378;
                                            }
                                            goto LABEL_384;
                                          }
                                          goto LABEL_369;
                                        }
                                        goto LABEL_366;
                                      }
                                      goto LABEL_363;
                                    }
                                    goto LABEL_360;
                                  }
                                  goto LABEL_357;
                                }
                                goto LABEL_354;
                              }
                              goto LABEL_351;
                            }
                            goto LABEL_348;
                          }
                          goto LABEL_345;
                        }
                        goto LABEL_342;
                      }
                      goto LABEL_339;
                    }
                    goto LABEL_336;
                  }
                  goto LABEL_333;
                }
                goto LABEL_330;
              }
              goto LABEL_327;
            }
            goto LABEL_324;
          }
          goto LABEL_321;
        }
      }
      else if ( j__strlen("arm") == a4 )
      {
        v4 = 50;
        if ( !a4 )
          return v4;
        goto LABEL_248;
      }
      if ( j__strlen("bsc") == a4 )
      {
        v4 = 51;
        if ( !a4 )
          return v4;
        goto LABEL_250;
      }
LABEL_321:
      if ( j__strlen("cray") == a4 )
      {
        v4 = 52;
        if ( !a4 )
          return v4;
        goto LABEL_252;
      }
LABEL_324:
      if ( j__strlen("fujitsu") == a4 )
      {
        v4 = 53;
        if ( !a4 )
          return v4;
        goto LABEL_254;
      }
LABEL_327:
      if ( j__strlen("gnu") == a4 )
      {
        v4 = 54;
        if ( !a4 )
          return v4;
        goto LABEL_256;
      }
LABEL_330:
      if ( j__strlen("ibm") == a4 )
      {
        v4 = 55;
        if ( !a4 )
          return v4;
        goto LABEL_258;
      }
LABEL_333:
      if ( j__strlen("intel") == a4 )
      {
        v4 = 56;
        if ( !a4 )
          return v4;
        goto LABEL_260;
      }
LABEL_336:
      if ( j__strlen("llvm") == a4 )
      {
        v4 = 57;
        if ( !a4 )
          return v4;
        goto LABEL_262;
      }
LABEL_339:
      if ( j__strlen("nec") == a4 )
      {
        v4 = 58;
        if ( !a4 )
          return v4;
        goto LABEL_264;
      }
LABEL_342:
      if ( j__strlen("nvidia") == a4 )
      {
        v4 = 59;
        if ( !a4 )
          return v4;
        goto LABEL_266;
      }
LABEL_345:
      if ( j__strlen("pgi") == a4 )
      {
        v4 = 60;
        if ( !a4 )
          return v4;
        goto LABEL_268;
      }
LABEL_348:
      if ( j__strlen("ti") == a4 )
      {
        v4 = 61;
        if ( !a4 )
          return v4;
        goto LABEL_270;
      }
LABEL_351:
      if ( j__strlen("unknown") == a4 )
      {
        v4 = 62;
        if ( !a4 )
          return v4;
        goto LABEL_272;
      }
LABEL_354:
      if ( j__strlen("match_all") == a4 )
      {
        v4 = 63;
        if ( !a4 )
          return v4;
        goto LABEL_274;
      }
LABEL_357:
      if ( j__strlen("match_any") == a4 )
      {
        v4 = 64;
        if ( !a4 )
          return v4;
        goto LABEL_276;
      }
LABEL_360:
      if ( j__strlen("match_none") == a4 )
      {
        v4 = 65;
        if ( !a4 )
          return v4;
        goto LABEL_278;
      }
LABEL_363:
      if ( j__strlen("disable_implicit_base") == a4 )
      {
        v4 = 66;
        if ( !a4 )
          return v4;
        goto LABEL_280;
      }
LABEL_366:
      if ( j__strlen("allow_templates") == a4 )
      {
        v4 = 67;
        if ( !a4 )
          return v4;
        goto LABEL_282;
      }
LABEL_369:
      if ( j__strlen("bind_to_declaration") == a4 )
      {
        v4 = 68;
        if ( !a4 )
          return v4;
        goto LABEL_284;
      }
LABEL_384:
      if ( j__strlen("unified_address") == a4 )
      {
        v4 = 75;
        if ( !a4 )
          return v4;
        goto LABEL_286;
      }
LABEL_378:
      if ( j__strlen("unified_shared_memory") == a4 )
      {
        v4 = 76;
        if ( !a4 )
          return v4;
        goto LABEL_288;
      }
LABEL_381:
      if ( j__strlen("reverse_offload") == a4 )
      {
        v4 = 77;
        if ( !a4 )
          return v4;
        goto LABEL_290;
      }
LABEL_387:
      if ( j__strlen("dynamic_allocators") == a4 )
      {
        v4 = 78;
        if ( !a4 )
          return v4;
        goto LABEL_292;
      }
LABEL_390:
      v4 = 0;
      if ( j__strlen("atomic_default_mem_order") != a4 )
        return v4;
      v4 = 79;
      if ( !a4 )
        return v4;
      return memcmp("atomic_default_mem_order", a3, a4) == 0 ? 0x4F : 0;
  }
  if ( a1 != 5 )
    return v4;
  if ( j__strlen("true") == a4 )
  {
    v4 = 69;
    if ( !a4 || !memcmp("true", a3, a4) )
      return v4;
    if ( j__strlen("false") == a4 )
      goto LABEL_15;
LABEL_375:
    v4 = 0;
    if ( j__strlen("unknown") == a4 )
    {
      v4 = 71;
      if ( a4 )
        return memcmp("unknown", a3, a4) == 0 ? 0x47 : 0;
    }
    return v4;
  }
  if ( j__strlen("false") != a4 )
    goto LABEL_375;
  v4 = 70;
  if ( !a4 )
    return v4;
LABEL_15:
  v4 = 70;
  if ( memcmp("false", a3, a4) )
  {
    v4 = 0;
    if ( j__strlen("unknown") == a4 )
      return memcmp("unknown", a3, a4) == 0 ? 0x47 : 0;
  }
  return v4;
}
