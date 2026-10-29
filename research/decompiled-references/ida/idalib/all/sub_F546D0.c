void __fastcall sub_F546D0(__int64 a1, __int64 a2, __m128 a3)
{
  char v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  char v7; // al

  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  v6 = v5;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 4, 1, 0);
    v6 = *(_QWORD *)(a1 + 1096);
    switch ( *(_WORD *)(a2 + 36) )
    {
      case 0:
        goto LABEL_13;
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_15;
      case 3:
        goto LABEL_16;
      case 4:
        goto LABEL_17;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_19;
      case 7:
        goto LABEL_20;
      case 8:
        goto LABEL_21;
      case 9:
        goto LABEL_22;
      case 0xA:
        goto LABEL_23;
      case 0xB:
        goto LABEL_24;
      case 0xC:
        goto LABEL_25;
      case 0xD:
        goto LABEL_26;
      case 0xE:
        goto LABEL_27;
      case 0xF:
        goto LABEL_28;
      case 0x10:
        goto LABEL_29;
      case 0x11:
        goto LABEL_30;
      case 0x12:
        goto LABEL_31;
      case 0x13:
        goto LABEL_32;
      case 0x14:
        goto LABEL_33;
      case 0x15:
        goto LABEL_34;
      case 0x16:
        goto LABEL_35;
      case 0x17:
        goto LABEL_36;
      case 0x18:
        goto LABEL_37;
      case 0x19:
        goto LABEL_38;
      case 0x1A:
        goto LABEL_39;
      case 0x1B:
        goto LABEL_40;
      case 0x1C:
        goto LABEL_41;
      case 0x1D:
        goto LABEL_42;
      case 0x1E:
        goto LABEL_43;
      case 0x1F:
        goto LABEL_44;
      case 0x20:
        goto LABEL_45;
      case 0x21:
        goto LABEL_46;
      case 0x22:
        goto LABEL_47;
      case 0x23:
        goto LABEL_48;
      case 0x24:
        goto LABEL_49;
      case 0x25:
        goto LABEL_50;
      case 0x26:
        goto LABEL_51;
      case 0x27:
        goto LABEL_52;
      case 0x28:
        goto LABEL_53;
      case 0x29:
        goto LABEL_54;
      case 0x2A:
        goto LABEL_55;
      case 0x2B:
        goto LABEL_56;
      case 0x2C:
        goto LABEL_57;
      case 0x2D:
        goto LABEL_58;
      case 0x2E:
        goto LABEL_59;
      case 0x2F:
        goto LABEL_60;
      case 0x30:
        goto LABEL_61;
      case 0x31:
        goto LABEL_62;
      case 0x32:
        goto LABEL_63;
      case 0x33:
        goto LABEL_64;
      case 0x34:
        goto LABEL_65;
      case 0x35:
        goto LABEL_66;
      case 0x36:
        goto LABEL_67;
      case 0x37:
        goto LABEL_68;
      case 0x38:
        goto LABEL_69;
      case 0x39:
        goto LABEL_70;
      case 0x3A:
        goto LABEL_71;
      case 0x3B:
        goto LABEL_72;
      case 0x3C:
        goto LABEL_73;
      case 0x3D:
        goto LABEL_74;
      case 0x3E:
        goto LABEL_75;
      case 0x3F:
        goto LABEL_76;
      case 0x40:
        goto LABEL_77;
      case 0x41:
        goto LABEL_78;
      case 0x42:
        goto LABEL_79;
      case 0x43:
        goto LABEL_80;
      case 0x44:
        goto LABEL_81;
      case 0x45:
        goto LABEL_82;
      case 0x46:
        goto LABEL_83;
      case 0x47:
        goto LABEL_84;
      case 0x48:
        goto LABEL_85;
      case 0x49:
        goto LABEL_86;
      case 0x4A:
        goto LABEL_87;
      case 0x4B:
        goto LABEL_88;
      case 0x4C:
        goto LABEL_89;
      case 0x4D:
        goto LABEL_90;
      case 0x4E:
        goto LABEL_91;
      case 0x4F:
        goto LABEL_92;
      case 0x50:
        goto LABEL_93;
      case 0x51:
        goto LABEL_94;
      case 0x52:
        goto LABEL_95;
      case 0x53:
        goto LABEL_96;
      case 0x54:
        goto LABEL_97;
      case 0x55:
        goto LABEL_98;
      case 0x56:
        goto LABEL_99;
      case 0x57:
        goto LABEL_100;
      case 0x58:
        goto LABEL_101;
      case 0x59:
        goto LABEL_102;
      case 0x5A:
        goto LABEL_103;
      case 0x5B:
        goto LABEL_104;
      case 0x5C:
        goto LABEL_105;
      case 0x5D:
        goto LABEL_106;
      case 0x5E:
        goto LABEL_107;
      case 0x5F:
        goto LABEL_108;
      case 0x60:
        goto LABEL_109;
      case 0x61:
        goto LABEL_110;
      case 0x62:
        goto LABEL_111;
      case 0x63:
        goto LABEL_112;
      case 0x64:
        goto LABEL_113;
      case 0x65:
        goto LABEL_114;
      case 0x66:
        goto LABEL_115;
      case 0x67:
        goto LABEL_116;
      case 0x68:
        goto LABEL_117;
      case 0x69:
        goto LABEL_118;
      case 0x6A:
        goto LABEL_119;
      case 0x6B:
        goto LABEL_120;
      case 0x6C:
        goto LABEL_121;
      case 0x6D:
        goto LABEL_122;
      case 0x6E:
        goto LABEL_123;
      case 0x6F:
        goto LABEL_124;
      case 0x70:
        goto LABEL_125;
      case 0x71:
        goto LABEL_126;
      case 0x72:
        goto LABEL_127;
      case 0x73:
        goto LABEL_128;
      case 0x74:
        goto LABEL_129;
      case 0x75:
        goto LABEL_130;
      case 0x76:
        goto LABEL_131;
      case 0x77:
        goto LABEL_132;
      case 0x78:
        goto LABEL_133;
      case 0x79:
        goto LABEL_134;
      case 0x7A:
        goto LABEL_135;
      case 0x7B:
        goto LABEL_136;
      case 0x7C:
        goto LABEL_137;
      case 0x7D:
        goto LABEL_138;
      case 0x7E:
        goto LABEL_139;
      case 0x7F:
        goto LABEL_140;
      case 0x80:
        goto LABEL_141;
      case 0x81:
        goto LABEL_142;
      case 0x82:
        goto LABEL_143;
      case 0x83:
        goto LABEL_144;
      case 0x84:
        goto LABEL_145;
      case 0x85:
        goto LABEL_146;
      case 0x86:
        goto LABEL_147;
      case 0x87:
        goto LABEL_148;
      case 0x88:
        goto LABEL_149;
      case 0x89:
        goto LABEL_150;
      case 0x8A:
        goto LABEL_151;
      case 0x8B:
        goto LABEL_152;
      case 0x8C:
        goto LABEL_153;
      case 0x8D:
        goto LABEL_154;
      case 0x8E:
        goto LABEL_155;
      case 0x8F:
        goto LABEL_156;
      case 0x90:
        goto LABEL_157;
      case 0x91:
        goto LABEL_158;
      case 0x92:
        goto LABEL_159;
      case 0x93:
        goto LABEL_160;
      case 0x94:
        goto LABEL_161;
      case 0x95:
        goto LABEL_162;
      case 0x96:
        goto LABEL_163;
      case 0x97:
        goto LABEL_164;
      case 0x98:
        goto LABEL_165;
      case 0x99:
        goto LABEL_166;
      case 0x9A:
        goto LABEL_167;
      case 0x9B:
        goto LABEL_168;
      case 0x9C:
        goto LABEL_169;
      case 0x9D:
        goto LABEL_170;
      case 0x9E:
        goto LABEL_171;
      case 0x9F:
        goto LABEL_172;
      case 0xA0:
        goto LABEL_173;
      case 0xA1:
        goto LABEL_174;
      case 0xA2:
        goto LABEL_175;
      case 0xA3:
        goto LABEL_176;
      case 0xA4:
        goto LABEL_177;
      case 0xA5:
        goto LABEL_178;
      case 0xA6:
        goto LABEL_179;
      case 0xA7:
        goto LABEL_180;
      case 0xA8:
        goto LABEL_181;
      case 0xA9:
        goto LABEL_182;
      case 0xAA:
        goto LABEL_183;
      case 0xAB:
        goto LABEL_184;
      case 0xAC:
        goto LABEL_185;
      case 0xAD:
        goto LABEL_186;
      case 0xAE:
        goto LABEL_187;
      case 0xAF:
        goto LABEL_188;
      case 0xB0:
        goto LABEL_189;
      case 0xB1:
        goto LABEL_190;
      case 0xB2:
        goto LABEL_191;
      case 0xB3:
        goto LABEL_192;
      case 0xB4:
        goto LABEL_193;
      case 0xB5:
        goto LABEL_194;
      case 0xB6:
        goto LABEL_195;
      case 0xB7:
        goto LABEL_196;
      case 0xB8:
        goto LABEL_197;
      case 0xB9:
        goto LABEL_198;
      case 0xBA:
        goto LABEL_199;
      case 0xBB:
        goto LABEL_200;
      case 0xBC:
        goto LABEL_201;
      case 0xBD:
        goto LABEL_202;
      case 0xBE:
        goto LABEL_203;
      case 0xBF:
        goto LABEL_204;
      case 0xC0:
        goto LABEL_205;
      case 0xC1:
        goto LABEL_206;
      case 0xC2:
        goto LABEL_207;
      case 0xC3:
        goto LABEL_208;
      case 0xC4:
        goto LABEL_209;
      case 0xC5:
        goto LABEL_210;
      case 0xC6:
        goto LABEL_211;
      case 0xC7:
        goto LABEL_212;
      case 0xC8:
        goto LABEL_213;
      case 0xC9:
        goto LABEL_214;
      case 0xCA:
        goto LABEL_215;
      case 0xCB:
        goto LABEL_216;
      case 0xCC:
        goto LABEL_217;
      case 0xCD:
        goto LABEL_218;
      case 0xCE:
        goto LABEL_219;
      case 0xCF:
        goto LABEL_220;
      case 0xD0:
        goto LABEL_221;
      case 0xD1:
        goto LABEL_222;
      case 0xD2:
        goto LABEL_223;
      case 0xD3:
        goto LABEL_224;
      case 0xD4:
        goto LABEL_225;
      case 0xD5:
        goto LABEL_226;
      case 0xD6:
        goto LABEL_227;
      case 0xD7:
        goto LABEL_228;
      case 0xD8:
        goto LABEL_229;
      case 0xD9:
        goto LABEL_230;
      case 0xDA:
        goto LABEL_231;
      case 0xDB:
        goto LABEL_232;
      case 0xDC:
        goto LABEL_233;
      case 0xDD:
        goto LABEL_234;
      case 0xDE:
        goto LABEL_235;
      case 0xDF:
        goto LABEL_236;
      case 0xE0:
        goto LABEL_237;
      case 0xE1:
        goto LABEL_238;
      case 0xE2:
        goto LABEL_239;
      case 0xE3:
        goto LABEL_240;
      case 0xE4:
        goto LABEL_241;
      case 0xE5:
        goto LABEL_242;
      case 0xE6:
        goto LABEL_243;
      case 0xE7:
        goto LABEL_244;
      case 0xE8:
        goto LABEL_245;
      case 0xE9:
        goto LABEL_246;
      case 0xEA:
        goto LABEL_247;
      case 0xEB:
        goto LABEL_248;
      case 0xEC:
        goto LABEL_249;
      case 0xED:
        goto LABEL_250;
      case 0xEE:
        goto LABEL_251;
      case 0xEF:
        goto LABEL_252;
      case 0xF0:
        goto LABEL_253;
      case 0xF1:
        goto LABEL_254;
      case 0xF2:
        goto LABEL_255;
      case 0xF3:
        goto LABEL_256;
      case 0xF4:
        goto LABEL_257;
      case 0xF5:
        goto LABEL_258;
      case 0xF6:
        goto LABEL_259;
      case 0xF7:
        goto LABEL_260;
      case 0xF8:
        goto LABEL_261;
      case 0xF9:
        goto LABEL_262;
      case 0xFA:
        goto LABEL_263;
      case 0xFB:
        goto LABEL_264;
      case 0xFC:
        goto LABEL_265;
      case 0xFD:
        goto LABEL_266;
      case 0xFE:
        goto LABEL_267;
      case 0xFF:
        goto LABEL_268;
      case 0x100:
        goto LABEL_269;
      case 0x101:
        goto LABEL_270;
      case 0x102:
        goto LABEL_271;
      case 0x103:
        goto LABEL_272;
      case 0x104:
        goto LABEL_273;
      case 0x105:
        goto LABEL_274;
      case 0x106:
        goto LABEL_275;
      case 0x107:
        goto LABEL_276;
      case 0x108:
        goto LABEL_277;
      case 0x109:
        goto LABEL_278;
      case 0x10A:
        goto LABEL_279;
      case 0x10B:
        goto LABEL_280;
      case 0x10C:
        goto LABEL_281;
      case 0x10D:
        goto LABEL_282;
      case 0x10E:
        goto LABEL_283;
      case 0x10F:
        goto LABEL_284;
      case 0x110:
        goto LABEL_285;
      case 0x111:
        goto LABEL_286;
      case 0x112:
        goto LABEL_287;
      case 0x113:
        goto LABEL_288;
      case 0x114:
        goto LABEL_289;
      case 0x115:
        goto LABEL_290;
      case 0x116:
        goto LABEL_291;
      case 0x117:
        goto LABEL_292;
      case 0x118:
        goto LABEL_293;
      case 0x119:
        goto LABEL_294;
      case 0x11A:
        goto LABEL_295;
      case 0x11B:
        goto LABEL_296;
      case 0x11C:
        goto LABEL_297;
      case 0x11D:
        goto LABEL_298;
      case 0x11E:
        goto LABEL_299;
      case 0x11F:
        goto LABEL_300;
      case 0x120:
        goto LABEL_301;
      case 0x121:
        goto LABEL_302;
      case 0x122:
        goto LABEL_303;
      case 0x123:
        goto LABEL_304;
      case 0x124:
        goto LABEL_305;
      case 0x125:
        goto LABEL_306;
      case 0x126:
        goto LABEL_307;
      case 0x127:
        goto LABEL_308;
      case 0x128:
        goto LABEL_309;
      case 0x129:
        goto LABEL_310;
      case 0x12A:
        goto LABEL_311;
      case 0x12B:
        goto LABEL_312;
      case 0x12C:
        goto LABEL_313;
      case 0x12D:
        goto LABEL_314;
      case 0x12E:
        goto LABEL_315;
      case 0x12F:
        goto LABEL_316;
      case 0x130:
        goto LABEL_317;
      case 0x131:
        goto LABEL_318;
      case 0x132:
        goto LABEL_319;
      case 0x133:
        goto LABEL_320;
      case 0x134:
        goto LABEL_321;
      case 0x135:
        goto LABEL_322;
      case 0x136:
        goto LABEL_323;
      case 0x137:
        goto LABEL_324;
      case 0x138:
        goto LABEL_325;
      case 0x139:
        goto LABEL_326;
      case 0x13A:
        goto LABEL_327;
      case 0x13B:
        goto LABEL_328;
      case 0x13C:
        goto LABEL_329;
      case 0x13D:
        goto LABEL_330;
      case 0x13E:
        goto LABEL_331;
      case 0x13F:
        goto LABEL_332;
      case 0x140:
        goto LABEL_333;
      case 0x141:
        goto LABEL_334;
      case 0x142:
        goto LABEL_335;
      case 0x143:
        goto LABEL_336;
      case 0x144:
        goto LABEL_337;
      case 0x145:
        goto LABEL_338;
      case 0x146:
        goto LABEL_339;
      case 0x147:
        goto LABEL_340;
      case 0x148:
        goto LABEL_341;
      case 0x149:
        goto LABEL_342;
      case 0x14A:
        goto LABEL_343;
      case 0x14B:
        goto LABEL_344;
      case 0x14C:
        goto LABEL_345;
      case 0x14D:
        goto LABEL_346;
      case 0x14E:
        goto LABEL_347;
      case 0x14F:
        goto LABEL_348;
      case 0x150:
        goto LABEL_349;
      case 0x151:
        goto LABEL_350;
      case 0x152:
        goto LABEL_351;
      case 0x153:
        goto LABEL_352;
      case 0x154:
        goto LABEL_353;
      case 0x155:
        goto LABEL_354;
      case 0x156:
        goto LABEL_355;
      case 0x157:
        goto LABEL_356;
      case 0x158:
        goto LABEL_357;
      case 0x159:
        goto LABEL_358;
      case 0x15A:
        goto LABEL_359;
      case 0x15B:
        goto LABEL_360;
      case 0x15C:
        goto LABEL_361;
      case 0x15D:
        goto LABEL_362;
      case 0x15E:
        goto LABEL_363;
      case 0x15F:
        goto LABEL_364;
      case 0x160:
        goto LABEL_365;
      case 0x161:
        goto LABEL_366;
      case 0x162:
        goto LABEL_367;
      case 0x163:
        goto LABEL_368;
      case 0x164:
        goto LABEL_369;
      case 0x165:
        goto LABEL_370;
      case 0x166:
        goto LABEL_371;
      case 0x167:
        goto LABEL_372;
      case 0x168:
        goto LABEL_373;
      case 0x169:
        goto LABEL_374;
      case 0x16A:
        goto LABEL_375;
      case 0x16B:
        goto LABEL_376;
      case 0x16C:
        goto LABEL_377;
      case 0x16D:
        goto LABEL_378;
      case 0x16E:
        goto LABEL_379;
      case 0x16F:
        goto LABEL_380;
      case 0x170:
        goto LABEL_381;
      case 0x171:
        goto LABEL_382;
      case 0x172:
        goto LABEL_383;
      case 0x173:
        goto LABEL_384;
      case 0x174:
        goto LABEL_385;
      case 0x175:
        goto LABEL_386;
      case 0x176:
        goto LABEL_387;
      case 0x177:
        goto LABEL_388;
      case 0x178:
        goto LABEL_389;
      case 0x179:
        goto LABEL_390;
      case 0x17A:
        goto LABEL_391;
      case 0x17B:
        goto LABEL_392;
      case 0x17C:
        goto LABEL_393;
      case 0x17D:
        goto LABEL_394;
      case 0x17E:
        goto LABEL_395;
      case 0x17F:
        goto LABEL_396;
      case 0x180:
        goto LABEL_397;
      case 0x181:
        goto LABEL_398;
      case 0x182:
        goto LABEL_399;
      case 0x183:
        goto LABEL_400;
      case 0x184:
        goto LABEL_401;
      case 0x185:
        goto LABEL_402;
      case 0x186:
        goto LABEL_403;
      case 0x187:
        goto LABEL_404;
      case 0x188:
        goto LABEL_405;
      case 0x189:
        goto LABEL_406;
      case 0x18A:
        goto LABEL_407;
      case 0x18B:
        goto LABEL_408;
      case 0x18C:
        goto LABEL_409;
      case 0x18D:
        goto LABEL_410;
      case 0x18E:
        goto LABEL_411;
      case 0x18F:
        goto LABEL_412;
      case 0x190:
        goto LABEL_413;
      case 0x191:
        goto LABEL_414;
      case 0x192:
        goto LABEL_415;
      case 0x193:
        goto LABEL_416;
      case 0x194:
        goto LABEL_417;
      case 0x195:
        goto LABEL_418;
      case 0x196:
        goto LABEL_419;
      case 0x197:
        goto LABEL_420;
      case 0x198:
        goto LABEL_421;
      case 0x199:
        goto LABEL_422;
      case 0x19A:
        goto LABEL_423;
      case 0x19B:
        goto LABEL_424;
      case 0x19C:
        goto LABEL_425;
      case 0x19D:
        goto LABEL_426;
      case 0x19E:
        goto LABEL_427;
      case 0x19F:
        goto LABEL_428;
      case 0x1A0:
        goto LABEL_429;
      case 0x1A1:
        goto LABEL_430;
      case 0x1A2:
        goto LABEL_431;
      case 0x1A3:
        goto LABEL_432;
      case 0x1A4:
        goto LABEL_433;
      case 0x1A5:
        goto LABEL_434;
      case 0x1A6:
        goto LABEL_435;
      case 0x1A7:
        goto LABEL_436;
      case 0x1A8:
        goto LABEL_437;
      case 0x1A9:
        goto LABEL_438;
      case 0x1AA:
        goto LABEL_439;
      case 0x1AB:
        goto LABEL_440;
      case 0x1AC:
        goto LABEL_441;
      case 0x1AD:
        goto LABEL_442;
      case 0x1AE:
        goto LABEL_443;
      case 0x1AF:
        goto LABEL_444;
      case 0x1B0:
        goto LABEL_445;
      case 0x1B1:
        goto LABEL_446;
      case 0x1B2:
        goto LABEL_447;
      case 0x1B3:
        goto LABEL_448;
      case 0x1B4:
        goto LABEL_449;
      case 0x1B5:
        goto LABEL_450;
      case 0x1B6:
        goto LABEL_451;
      case 0x1B7:
        goto LABEL_452;
      case 0x1B8:
        goto LABEL_453;
      case 0x1B9:
        goto LABEL_4;
      case 0x1BA:
        goto LABEL_12;
      default:
        sub_995540(*(_QWORD *)(a1 + 1096), "Attr");
        goto LABEL_6;
    }
  }
  switch ( *(_WORD *)(a2 + 36) )
  {
    case 0:
LABEL_13:
      sub_995540(v6, "AddressSpace");
      goto LABEL_5;
    case 1:
LABEL_14:
      sub_995540(v6, "Allocating");
      goto LABEL_5;
    case 2:
LABEL_15:
      sub_995540(v6, "AnnotateType");
      goto LABEL_5;
    case 3:
LABEL_16:
      sub_995540(v6, "ArmAgnostic");
      goto LABEL_5;
    case 4:
LABEL_17:
      sub_995540(v6, "ArmIn");
      goto LABEL_5;
    case 5:
LABEL_18:
      sub_995540(v6, "ArmInOut");
      goto LABEL_5;
    case 6:
LABEL_19:
      sub_995540(v6, "ArmMveStrictPolymorphism");
      goto LABEL_5;
    case 7:
LABEL_20:
      sub_995540(v6, "ArmOut");
      goto LABEL_5;
    case 8:
LABEL_21:
      sub_995540(v6, "ArmPreserves");
      goto LABEL_5;
    case 9:
LABEL_22:
      sub_995540(v6, "ArmStreaming");
      goto LABEL_5;
    case 0xA:
LABEL_23:
      sub_995540(v6, "ArmStreamingCompatible");
      goto LABEL_5;
    case 0xB:
LABEL_24:
      sub_995540(v6, "BTFTypeTag");
      goto LABEL_5;
    case 0xC:
LABEL_25:
      sub_995540(v6, "Blocking");
      goto LABEL_5;
    case 0xD:
LABEL_26:
      sub_995540(v6, "CFIUncheckedCallee");
      goto LABEL_5;
    case 0xE:
LABEL_27:
      sub_995540(v6, "CmseNSCall");
      goto LABEL_5;
    case 0xF:
LABEL_28:
      sub_995540(v6, "ExtVectorType");
      goto LABEL_5;
    case 0x10:
LABEL_29:
      sub_995540(v6, "HLSLContainedType");
      goto LABEL_5;
    case 0x11:
LABEL_30:
      sub_995540(v6, "HLSLGroupSharedAddressSpace");
      goto LABEL_5;
    case 0x12:
LABEL_31:
      sub_995540(v6, "HLSLROV");
      goto LABEL_5;
    case 0x13:
LABEL_32:
      sub_995540(v6, "HLSLRawBuffer");
      goto LABEL_5;
    case 0x14:
LABEL_33:
      sub_995540(v6, "HLSLResourceClass");
      goto LABEL_5;
    case 0x15:
LABEL_34:
      sub_995540(v6, "NoDeref");
      goto LABEL_5;
    case 0x16:
LABEL_35:
      sub_995540(v6, "NonAllocating");
      goto LABEL_5;
    case 0x17:
LABEL_36:
      sub_995540(v6, "NonBlocking");
      goto LABEL_5;
    case 0x18:
LABEL_37:
      sub_995540(v6, "ObjCGC");
      goto LABEL_5;
    case 0x19:
LABEL_38:
      sub_995540(v6, "ObjCInertUnsafeUnretained");
      goto LABEL_5;
    case 0x1A:
LABEL_39:
      sub_995540(v6, "ObjCKindOf");
      goto LABEL_5;
    case 0x1B:
LABEL_40:
      sub_995540(v6, "OpenCLConstantAddressSpace");
      goto LABEL_5;
    case 0x1C:
LABEL_41:
      sub_995540(v6, "OpenCLGenericAddressSpace");
      goto LABEL_5;
    case 0x1D:
LABEL_42:
      sub_995540(v6, "OpenCLGlobalAddressSpace");
      goto LABEL_5;
    case 0x1E:
LABEL_43:
      sub_995540(v6, "OpenCLGlobalDeviceAddressSpace");
      goto LABEL_5;
    case 0x1F:
LABEL_44:
      sub_995540(v6, "OpenCLGlobalHostAddressSpace");
      goto LABEL_5;
    case 0x20:
LABEL_45:
      sub_995540(v6, "OpenCLLocalAddressSpace");
      goto LABEL_5;
    case 0x21:
LABEL_46:
      sub_995540(v6, "OpenCLPrivateAddressSpace");
      goto LABEL_5;
    case 0x22:
LABEL_47:
      sub_995540(v6, "PointerAuth");
      goto LABEL_5;
    case 0x23:
LABEL_48:
      sub_995540(v6, "Ptr32");
      goto LABEL_5;
    case 0x24:
LABEL_49:
      sub_995540(v6, "Ptr64");
      goto LABEL_5;
    case 0x25:
LABEL_50:
      sub_995540(v6, "SPtr");
      goto LABEL_5;
    case 0x26:
LABEL_51:
      sub_995540(v6, "TypeNonNull");
      goto LABEL_5;
    case 0x27:
LABEL_52:
      sub_995540(v6, "TypeNullUnspecified");
      goto LABEL_5;
    case 0x28:
LABEL_53:
      sub_995540(v6, "TypeNullableResult");
      goto LABEL_5;
    case 0x29:
LABEL_54:
      sub_995540(v6, "UPtr");
      goto LABEL_5;
    case 0x2A:
LABEL_55:
      sub_995540(v6, "WebAssemblyFuncref");
      goto LABEL_5;
    case 0x2B:
LABEL_56:
      sub_995540(v6, "Atomic");
      goto LABEL_5;
    case 0x2C:
LABEL_57:
      sub_995540(v6, "CXXAssume");
      goto LABEL_5;
    case 0x2D:
LABEL_58:
      sub_995540(v6, "CodeAlign");
      goto LABEL_5;
    case 0x2E:
LABEL_59:
      sub_995540(v6, "FallThrough");
      goto LABEL_5;
    case 0x2F:
LABEL_60:
      sub_995540(v6, "HLSLControlFlowHint");
      goto LABEL_5;
    case 0x30:
LABEL_61:
      sub_995540(v6, "HLSLLoopHint");
      goto LABEL_5;
    case 0x31:
LABEL_62:
      sub_995540(v6, "Likely");
      goto LABEL_5;
    case 0x32:
LABEL_63:
      sub_995540(v6, "MustTail");
      goto LABEL_5;
    case 0x33:
LABEL_64:
      sub_995540(v6, "OpenCLUnrollHint");
      goto LABEL_5;
    case 0x34:
LABEL_65:
      sub_995540(v6, "Unlikely");
      goto LABEL_5;
    case 0x35:
LABEL_66:
      sub_995540(v6, "AlwaysInline");
      goto LABEL_5;
    case 0x36:
LABEL_67:
      sub_995540(v6, "NoInline");
      goto LABEL_5;
    case 0x37:
LABEL_68:
      sub_995540(v6, "NoMerge");
      goto LABEL_5;
    case 0x38:
LABEL_69:
      sub_995540(v6, "Suppress");
      goto LABEL_5;
    case 0x39:
LABEL_70:
      sub_995540(v6, "AArch64SVEPcs");
      goto LABEL_5;
    case 0x3A:
LABEL_71:
      sub_995540(v6, "AArch64VectorPcs");
      goto LABEL_5;
    case 0x3B:
LABEL_72:
      sub_995540(v6, "AcquireHandle");
      goto LABEL_5;
    case 0x3C:
LABEL_73:
      sub_995540(v6, "AnyX86NoCfCheck");
      goto LABEL_5;
    case 0x3D:
LABEL_74:
      sub_995540(v6, "CDecl");
      goto LABEL_5;
    case 0x3E:
LABEL_75:
      sub_995540(v6, "CountedBy");
      goto LABEL_5;
    case 0x3F:
LABEL_76:
      sub_995540(v6, "CountedByOrNull");
      goto LABEL_5;
    case 0x40:
LABEL_77:
      sub_995540(v6, "DeviceKernel");
      goto LABEL_5;
    case 0x41:
LABEL_78:
      sub_995540(v6, "FastCall");
      goto LABEL_5;
    case 0x42:
LABEL_79:
      sub_995540(v6, "IntelOclBicc");
      goto LABEL_5;
    case 0x43:
LABEL_80:
      sub_995540(v6, "LifetimeBound");
      goto LABEL_5;
    case 0x44:
LABEL_81:
      sub_995540(v6, "LifetimeCaptureBy");
      goto LABEL_5;
    case 0x45:
LABEL_82:
      sub_995540(v6, "M68kRTD");
      goto LABEL_5;
    case 0x46:
LABEL_83:
      sub_995540(v6, "MSABI");
      goto LABEL_5;
    case 0x47:
LABEL_84:
      sub_995540(v6, "NSReturnsRetained");
      goto LABEL_5;
    case 0x48:
LABEL_85:
      sub_995540(v6, "ObjCOwnership");
      goto LABEL_5;
    case 0x49:
LABEL_86:
      sub_995540(v6, "Pascal");
      goto LABEL_5;
    case 0x4A:
LABEL_87:
      sub_995540(v6, "Pcs");
      goto LABEL_5;
    case 0x4B:
LABEL_88:
      sub_995540(v6, "PreserveAll");
      goto LABEL_5;
    case 0x4C:
LABEL_89:
      sub_995540(v6, "PreserveMost");
      goto LABEL_5;
    case 0x4D:
LABEL_90:
      sub_995540(v6, "PreserveNone");
      goto LABEL_5;
    case 0x4E:
LABEL_91:
      sub_995540(v6, "RISCVVLSCC");
      goto LABEL_5;
    case 0x4F:
LABEL_92:
      sub_995540(v6, "RISCVVectorCC");
      goto LABEL_5;
    case 0x50:
LABEL_93:
      sub_995540(v6, "RegCall");
      goto LABEL_5;
    case 0x51:
LABEL_94:
      sub_995540(v6, "SizedBy");
      goto LABEL_5;
    case 0x52:
LABEL_95:
      sub_995540(v6, "SizedByOrNull");
      goto LABEL_5;
    case 0x53:
LABEL_96:
      sub_995540(v6, "StdCall");
      goto LABEL_5;
    case 0x54:
LABEL_97:
      sub_995540(v6, "SwiftAsyncCall");
      goto LABEL_5;
    case 0x55:
LABEL_98:
      sub_995540(v6, "SwiftAttr");
      goto LABEL_5;
    case 0x56:
LABEL_99:
      sub_995540(v6, "SwiftCall");
      goto LABEL_5;
    case 0x57:
LABEL_100:
      sub_995540(v6, "SysVABI");
      goto LABEL_5;
    case 0x58:
LABEL_101:
      sub_995540(v6, "ThisCall");
      goto LABEL_5;
    case 0x59:
LABEL_102:
      sub_995540(v6, "TypeNullable");
      goto LABEL_5;
    case 0x5A:
LABEL_103:
      sub_995540(v6, "VectorCall");
      goto LABEL_5;
    case 0x5B:
LABEL_104:
      sub_995540(v6, "Annotate");
      goto LABEL_5;
    case 0x5C:
LABEL_105:
      sub_995540(v6, "HLSLParamModifier");
      goto LABEL_5;
    case 0x5D:
LABEL_106:
      sub_995540(v6, "SwiftAsyncContext");
      goto LABEL_5;
    case 0x5E:
LABEL_107:
      sub_995540(v6, "SwiftContext");
      goto LABEL_5;
    case 0x5F:
LABEL_108:
      sub_995540(v6, "SwiftErrorResult");
      goto LABEL_5;
    case 0x60:
LABEL_109:
      sub_995540(v6, "SwiftIndirectResult");
      goto LABEL_5;
    case 0x61:
LABEL_110:
      sub_995540(v6, "CFConsumed");
      goto LABEL_5;
    case 0x62:
LABEL_111:
      sub_995540(v6, "CarriesDependency");
      goto LABEL_5;
    case 0x63:
LABEL_112:
      sub_995540(v6, "NSConsumed");
      goto LABEL_5;
    case 0x64:
LABEL_113:
      sub_995540(v6, "NonNull");
      goto LABEL_5;
    case 0x65:
LABEL_114:
      sub_995540(v6, "OSConsumed");
      goto LABEL_5;
    case 0x66:
LABEL_115:
      sub_995540(v6, "PassObjectSize");
      goto LABEL_5;
    case 0x67:
LABEL_116:
      sub_995540(v6, "ReleaseHandle");
      goto LABEL_5;
    case 0x68:
LABEL_117:
      sub_995540(v6, "UseHandle");
      goto LABEL_5;
    case 0x69:
LABEL_118:
      sub_995540(v6, "HLSLPackOffset");
      goto LABEL_5;
    case 0x6A:
LABEL_119:
      sub_995540(v6, "HLSLSV_DispatchThreadID");
      goto LABEL_5;
    case 0x6B:
LABEL_120:
      sub_995540(v6, "HLSLSV_GroupID");
      goto LABEL_5;
    case 0x6C:
LABEL_121:
      sub_995540(v6, "HLSLSV_GroupIndex");
      goto LABEL_5;
    case 0x6D:
LABEL_122:
      sub_995540(v6, "HLSLSV_GroupThreadID");
      goto LABEL_5;
    case 0x6E:
LABEL_123:
      sub_995540(v6, "HLSLSV_Position");
      goto LABEL_5;
    case 0x6F:
LABEL_124:
      sub_995540(v6, "AMDGPUFlatWorkGroupSize");
      goto LABEL_5;
    case 0x70:
LABEL_125:
      sub_995540(v6, "AMDGPUMaxNumWorkGroups");
      goto LABEL_5;
    case 0x71:
LABEL_126:
      sub_995540(v6, "AMDGPUNumSGPR");
      goto LABEL_5;
    case 0x72:
LABEL_127:
      sub_995540(v6, "AMDGPUNumVGPR");
      goto LABEL_5;
    case 0x73:
LABEL_128:
      sub_995540(v6, "AMDGPUWavesPerEU");
      goto LABEL_5;
    case 0x74:
LABEL_129:
      sub_995540(v6, "ARMInterrupt");
      goto LABEL_5;
    case 0x75:
LABEL_130:
      sub_995540(v6, "ARMInterruptSaveFP");
      goto LABEL_5;
    case 0x76:
LABEL_131:
      sub_995540(v6, "ARMSaveFP");
      goto LABEL_5;
    case 0x77:
LABEL_132:
      sub_995540(v6, "AVRInterrupt");
      goto LABEL_5;
    case 0x78:
LABEL_133:
      sub_995540(v6, "AVRSignal");
      goto LABEL_5;
    case 0x79:
LABEL_134:
      sub_995540(v6, "AcquireCapability");
      goto LABEL_5;
    case 0x7A:
LABEL_135:
      sub_995540(v6, "AcquiredAfter");
      goto LABEL_5;
    case 0x7B:
LABEL_136:
      sub_995540(v6, "AcquiredBefore");
      goto LABEL_5;
    case 0x7C:
LABEL_137:
      sub_995540(v6, "AlignMac68k");
      goto LABEL_5;
    case 0x7D:
LABEL_138:
      sub_995540(v6, "AlignNatural");
      goto LABEL_5;
    case 0x7E:
LABEL_139:
      sub_995540(v6, "Aligned");
      goto LABEL_5;
    case 0x7F:
LABEL_140:
      sub_995540(v6, "AllocAlign");
      goto LABEL_5;
    case 0x80:
LABEL_141:
      sub_995540(v6, "AllocSize");
      goto LABEL_5;
    case 0x81:
LABEL_142:
      sub_995540(v6, "AlwaysDestroy");
      goto LABEL_5;
    case 0x82:
LABEL_143:
      sub_995540(v6, "AnalyzerNoReturn");
      goto LABEL_5;
    case 0x83:
LABEL_144:
      sub_995540(v6, "AnyX86Interrupt");
      goto LABEL_5;
    case 0x84:
LABEL_145:
      sub_995540(v6, "AnyX86NoCallerSavedRegisters");
      goto LABEL_5;
    case 0x85:
LABEL_146:
      sub_995540(v6, "ArcWeakrefUnavailable");
      goto LABEL_5;
    case 0x86:
LABEL_147:
      sub_995540(v6, "ArgumentWithTypeTag");
      goto LABEL_5;
    case 0x87:
LABEL_148:
      sub_995540(v6, "ArmBuiltinAlias");
      goto LABEL_5;
    case 0x88:
LABEL_149:
      sub_995540(v6, "ArmLocallyStreaming");
      goto LABEL_5;
    case 0x89:
LABEL_150:
      sub_995540(v6, "ArmNew");
      goto LABEL_5;
    case 0x8A:
LABEL_151:
      sub_995540(v6, "Artificial");
      goto LABEL_5;
    case 0x8B:
LABEL_152:
      sub_995540(v6, "AsmLabel");
      goto LABEL_5;
    case 0x8C:
LABEL_153:
      sub_995540(v6, "AssertCapability");
      goto LABEL_5;
    case 0x8D:
LABEL_154:
      sub_995540(v6, "AssumeAligned");
      goto LABEL_5;
    case 0x8E:
LABEL_155:
      sub_995540(v6, "Availability");
      goto LABEL_5;
    case 0x8F:
LABEL_156:
      sub_995540(v6, "AvailableOnlyInDefaultEvalMethod");
      goto LABEL_5;
    case 0x90:
LABEL_157:
      sub_995540(v6, "BPFFastCall");
      goto LABEL_5;
    case 0x91:
LABEL_158:
      sub_995540(v6, "BPFPreserveAccessIndex");
      goto LABEL_5;
    case 0x92:
LABEL_159:
      sub_995540(v6, "BPFPreserveStaticOffset");
      goto LABEL_5;
    case 0x93:
LABEL_160:
      sub_995540(v6, "BTFDeclTag");
      goto LABEL_5;
    case 0x94:
LABEL_161:
      sub_995540(v6, "Blocks");
      goto LABEL_5;
    case 0x95:
LABEL_162:
      sub_995540(v6, "Builtin");
      goto LABEL_5;
    case 0x96:
LABEL_163:
      sub_995540(v6, "C11NoReturn");
      goto LABEL_5;
    case 0x97:
LABEL_164:
      sub_995540(v6, "CFAuditedTransfer");
      goto LABEL_5;
    case 0x98:
LABEL_165:
      sub_995540(v6, "CFGuard");
      goto LABEL_5;
    case 0x99:
LABEL_166:
      sub_995540(v6, "CFICanonicalJumpTable");
      goto LABEL_5;
    case 0x9A:
LABEL_167:
      sub_995540(v6, "CFReturnsNotRetained");
      goto LABEL_5;
    case 0x9B:
LABEL_168:
      sub_995540(v6, "CFReturnsRetained");
      goto LABEL_5;
    case 0x9C:
LABEL_169:
      sub_995540(v6, "CFUnknownTransfer");
      goto LABEL_5;
    case 0x9D:
LABEL_170:
      sub_995540(v6, "CPUDispatch");
      goto LABEL_5;
    case 0x9E:
LABEL_171:
      sub_995540(v6, "CPUSpecific");
      goto LABEL_5;
    case 0x9F:
LABEL_172:
      sub_995540(v6, "CUDAConstant");
      goto LABEL_5;
    case 0xA0:
LABEL_173:
      sub_995540(v6, "CUDADevice");
      goto LABEL_5;
    case 0xA1:
LABEL_174:
      sub_995540(v6, "CUDADeviceBuiltinSurfaceType");
      goto LABEL_5;
    case 0xA2:
LABEL_175:
      sub_995540(v6, "CUDADeviceBuiltinTextureType");
      goto LABEL_5;
    case 0xA3:
LABEL_176:
      sub_995540(v6, "CUDAGlobal");
      goto LABEL_5;
    case 0xA4:
LABEL_177:
      sub_995540(v6, "CUDAGridConstant");
      goto LABEL_5;
    case 0xA5:
LABEL_178:
      sub_995540(v6, "CUDAHost");
      goto LABEL_5;
    case 0xA6:
LABEL_179:
      sub_995540(v6, "CUDAInvalidTarget");
      goto LABEL_5;
    case 0xA7:
LABEL_180:
      sub_995540(v6, "CUDALaunchBounds");
      goto LABEL_5;
    case 0xA8:
LABEL_181:
      sub_995540(v6, "CUDAShared");
      goto LABEL_5;
    case 0xA9:
LABEL_182:
      sub_995540(v6, "CXX11NoReturn");
      goto LABEL_5;
    case 0xAA:
LABEL_183:
      sub_995540(v6, "CallableWhen");
      goto LABEL_5;
    case 0xAB:
LABEL_184:
      sub_995540(v6, "Callback");
      goto LABEL_5;
    case 0xAC:
LABEL_185:
      sub_995540(v6, "Capability");
      goto LABEL_5;
    case 0xAD:
LABEL_186:
      sub_995540(v6, "CapturedRecord");
      goto LABEL_5;
    case 0xAE:
LABEL_187:
      sub_995540(v6, "Cleanup");
      goto LABEL_5;
    case 0xAF:
LABEL_188:
      sub_995540(v6, "ClspvLibclcBuiltin");
      goto LABEL_5;
    case 0xB0:
LABEL_189:
      sub_995540(v6, "CmseNSEntry");
      goto LABEL_5;
    case 0xB1:
LABEL_190:
      sub_995540(v6, "CodeModel");
      goto LABEL_5;
    case 0xB2:
LABEL_191:
      sub_995540(v6, "CodeSeg");
      goto LABEL_5;
    case 0xB3:
LABEL_192:
      sub_995540(v6, "Cold");
      goto LABEL_5;
    case 0xB4:
LABEL_193:
      sub_995540(v6, "Common");
      goto LABEL_5;
    case 0xB5:
LABEL_194:
      sub_995540(v6, "Const");
      goto LABEL_5;
    case 0xB6:
LABEL_195:
      sub_995540(v6, "ConstInit");
      goto LABEL_5;
    case 0xB7:
LABEL_196:
      sub_995540(v6, "Constructor");
      goto LABEL_5;
    case 0xB8:
LABEL_197:
      sub_995540(v6, "Consumable");
      goto LABEL_5;
    case 0xB9:
LABEL_198:
      sub_995540(v6, "ConsumableAutoCast");
      goto LABEL_5;
    case 0xBA:
LABEL_199:
      sub_995540(v6, "ConsumableSetOnRead");
      goto LABEL_5;
    case 0xBB:
LABEL_200:
      sub_995540(v6, "Convergent");
      goto LABEL_5;
    case 0xBC:
LABEL_201:
      sub_995540(v6, "CoroAwaitElidable");
      goto LABEL_5;
    case 0xBD:
LABEL_202:
      sub_995540(v6, "CoroAwaitElidableArgument");
      goto LABEL_5;
    case 0xBE:
LABEL_203:
      sub_995540(v6, "CoroDisableLifetimeBound");
      goto LABEL_5;
    case 0xBF:
LABEL_204:
      sub_995540(v6, "CoroLifetimeBound");
      goto LABEL_5;
    case 0xC0:
LABEL_205:
      sub_995540(v6, "CoroOnlyDestroyWhenComplete");
      goto LABEL_5;
    case 0xC1:
LABEL_206:
      sub_995540(v6, "CoroReturnType");
      goto LABEL_5;
    case 0xC2:
LABEL_207:
      sub_995540(v6, "CoroWrapper");
      goto LABEL_5;
    case 0xC3:
LABEL_208:
      sub_995540(v6, "DLLExport");
      goto LABEL_5;
    case 0xC4:
LABEL_209:
      sub_995540(v6, "DLLExportStaticLocal");
      goto LABEL_5;
    case 0xC5:
LABEL_210:
      sub_995540(v6, "DLLImport");
      goto LABEL_5;
    case 0xC6:
LABEL_211:
      sub_995540(v6, "DLLImportStaticLocal");
      goto LABEL_5;
    case 0xC7:
LABEL_212:
      sub_995540(v6, "Deprecated");
      goto LABEL_5;
    case 0xC8:
LABEL_213:
      sub_995540(v6, "Destructor");
      goto LABEL_5;
    case 0xC9:
LABEL_214:
      sub_995540(v6, "DiagnoseAsBuiltin");
      goto LABEL_5;
    case 0xCA:
LABEL_215:
      sub_995540(v6, "DiagnoseIf");
      goto LABEL_5;
    case 0xCB:
LABEL_216:
      sub_995540(v6, "DisableSanitizerInstrumentation");
      goto LABEL_5;
    case 0xCC:
LABEL_217:
      sub_995540(v6, "DisableTailCalls");
      goto LABEL_5;
    case 0xCD:
LABEL_218:
      sub_995540(v6, "EmptyBases");
      goto LABEL_5;
    case 0xCE:
LABEL_219:
      sub_995540(v6, "EnableIf");
      goto LABEL_5;
    case 0xCF:
LABEL_220:
      sub_995540(v6, "EnforceTCB");
      goto LABEL_5;
    case 0xD0:
LABEL_221:
      sub_995540(v6, "EnforceTCBLeaf");
      goto LABEL_5;
    case 0xD1:
LABEL_222:
      sub_995540(v6, "EnumExtensibility");
      goto LABEL_5;
    case 0xD2:
LABEL_223:
      sub_995540(v6, "Error");
      goto LABEL_5;
    case 0xD3:
LABEL_224:
      sub_995540(v6, "ExcludeFromExplicitInstantiation");
      goto LABEL_5;
    case 0xD4:
LABEL_225:
      sub_995540(v6, "ExplicitInit");
      goto LABEL_5;
    case 0xD5:
LABEL_226:
      sub_995540(v6, "ExternalSourceSymbol");
      goto LABEL_5;
    case 0xD6:
LABEL_227:
      sub_995540(v6, "Final");
      goto LABEL_5;
    case 0xD7:
LABEL_228:
      sub_995540(v6, "FlagEnum");
      goto LABEL_5;
    case 0xD8:
LABEL_229:
      sub_995540(v6, "Flatten");
      goto LABEL_5;
    case 0xD9:
LABEL_230:
      sub_995540(v6, "Format");
      goto LABEL_5;
    case 0xDA:
LABEL_231:
      sub_995540(v6, "FormatArg");
      goto LABEL_5;
    case 0xDB:
LABEL_232:
      sub_995540(v6, "FormatMatches");
      goto LABEL_5;
    case 0xDC:
LABEL_233:
      sub_995540(v6, "FunctionReturnThunks");
      goto LABEL_5;
    case 0xDD:
LABEL_234:
      sub_995540(v6, "GNUInline");
      goto LABEL_5;
    case 0xDE:
LABEL_235:
      sub_995540(v6, "GuardedBy");
      goto LABEL_5;
    case 0xDF:
LABEL_236:
      sub_995540(v6, "GuardedVar");
      goto LABEL_5;
    case 0xE0:
LABEL_237:
      sub_995540(v6, "HIPManaged");
      goto LABEL_5;
    case 0xE1:
LABEL_238:
      sub_995540(v6, "HLSLNumThreads");
      goto LABEL_5;
    case 0xE2:
LABEL_239:
      sub_995540(v6, "HLSLResourceBinding");
      goto LABEL_5;
    case 0xE3:
LABEL_240:
      sub_995540(v6, "HLSLShader");
      goto LABEL_5;
    case 0xE4:
LABEL_241:
      sub_995540(v6, "HLSLVkConstantId");
      goto LABEL_5;
    case 0xE5:
LABEL_242:
      sub_995540(v6, "HLSLVkExtBuiltinInput");
      goto LABEL_5;
    case 0xE6:
LABEL_243:
      sub_995540(v6, "HLSLWaveSize");
      goto LABEL_5;
    case 0xE7:
LABEL_244:
      sub_995540(v6, "Hot");
      goto LABEL_5;
    case 0xE8:
LABEL_245:
      sub_995540(v6, "HybridPatchable");
      goto LABEL_5;
    case 0xE9:
LABEL_246:
      sub_995540(v6, "IBAction");
      goto LABEL_5;
    case 0xEA:
LABEL_247:
      sub_995540(v6, "IBOutlet");
      goto LABEL_5;
    case 0xEB:
LABEL_248:
      sub_995540(v6, "IBOutletCollection");
      goto LABEL_5;
    case 0xEC:
LABEL_249:
      sub_995540(v6, "InferredNoReturn");
      goto LABEL_5;
    case 0xED:
LABEL_250:
      sub_995540(v6, "InitPriority");
      goto LABEL_5;
    case 0xEE:
LABEL_251:
      sub_995540(v6, "InternalLinkage");
      goto LABEL_5;
    case 0xEF:
LABEL_252:
      sub_995540(v6, "LTOVisibilityPublic");
      goto LABEL_5;
    case 0xF0:
LABEL_253:
      sub_995540(v6, "LayoutVersion");
      goto LABEL_5;
    case 0xF1:
LABEL_254:
      sub_995540(v6, "Leaf");
      goto LABEL_5;
    case 0xF2:
LABEL_255:
      sub_995540(v6, "LockReturned");
      goto LABEL_5;
    case 0xF3:
LABEL_256:
      sub_995540(v6, "LocksExcluded");
      goto LABEL_5;
    case 0xF4:
LABEL_257:
      sub_995540(v6, "M68kInterrupt");
      goto LABEL_5;
    case 0xF5:
LABEL_258:
      sub_995540(v6, "MIGServerRoutine");
      goto LABEL_5;
    case 0xF6:
LABEL_259:
      sub_995540(v6, "MSAllocator");
      goto LABEL_5;
    case 0xF7:
LABEL_260:
      sub_995540(v6, "MSConstexpr");
      goto LABEL_5;
    case 0xF8:
LABEL_261:
      sub_995540(v6, "MSInheritance");
      goto LABEL_5;
    case 0xF9:
LABEL_262:
      sub_995540(v6, "MSNoVTable");
      goto LABEL_5;
    case 0xFA:
LABEL_263:
      sub_995540(v6, "MSP430Interrupt");
      goto LABEL_5;
    case 0xFB:
LABEL_264:
      sub_995540(v6, "MSStruct");
      goto LABEL_5;
    case 0xFC:
LABEL_265:
      sub_995540(v6, "MSVtorDisp");
      goto LABEL_5;
    case 0xFD:
LABEL_266:
      sub_995540(v6, "MaxFieldAlignment");
      goto LABEL_5;
    case 0xFE:
LABEL_267:
      sub_995540(v6, "MayAlias");
      goto LABEL_5;
    case 0xFF:
LABEL_268:
      sub_995540(v6, "MaybeUndef");
      goto LABEL_5;
    case 0x100:
LABEL_269:
      sub_995540(v6, "MicroMips");
      goto LABEL_5;
    case 0x101:
LABEL_270:
      sub_995540(v6, "MinSize");
      goto LABEL_5;
    case 0x102:
LABEL_271:
      sub_995540(v6, "MinVectorWidth");
      goto LABEL_5;
    case 0x103:
LABEL_272:
      sub_995540(v6, "Mips16");
      goto LABEL_5;
    case 0x104:
LABEL_273:
      sub_995540(v6, "MipsInterrupt");
      goto LABEL_5;
    case 0x105:
LABEL_274:
      sub_995540(v6, "MipsLongCall");
      goto LABEL_5;
    case 0x106:
LABEL_275:
      sub_995540(v6, "MipsShortCall");
      goto LABEL_5;
    case 0x107:
LABEL_276:
      sub_995540(v6, "NSConsumesSelf");
      goto LABEL_5;
    case 0x108:
LABEL_277:
      sub_995540(v6, "NSErrorDomain");
      goto LABEL_5;
    case 0x109:
LABEL_278:
      sub_995540(v6, "NSReturnsAutoreleased");
      goto LABEL_5;
    case 0x10A:
LABEL_279:
      sub_995540(v6, "NSReturnsNotRetained");
      goto LABEL_5;
    case 0x10B:
LABEL_280:
      sub_995540(v6, "Naked");
      goto LABEL_5;
    case 0x10C:
LABEL_281:
      sub_995540(v6, "NoAlias");
      goto LABEL_5;
    case 0x10D:
LABEL_282:
      sub_995540(v6, "NoCommon");
      goto LABEL_5;
    case 0x10E:
LABEL_283:
      sub_995540(v6, "NoConvergent");
      goto LABEL_5;
    case 0x10F:
LABEL_284:
      sub_995540(v6, "NoDebug");
      goto LABEL_5;
    case 0x110:
LABEL_285:
      sub_995540(v6, "NoDestroy");
      goto LABEL_5;
    case 0x111:
LABEL_286:
      sub_995540(v6, "NoDuplicate");
      goto LABEL_5;
    case 0x112:
LABEL_287:
      sub_995540(v6, "NoInstrumentFunction");
      goto LABEL_5;
    case 0x113:
LABEL_288:
      sub_995540(v6, "NoMicroMips");
      goto LABEL_5;
    case 0x114:
LABEL_289:
      sub_995540(v6, "NoMips16");
      goto LABEL_5;
    case 0x115:
LABEL_290:
      sub_995540(v6, "NoProfileFunction");
      goto LABEL_5;
    case 0x116:
LABEL_291:
      sub_995540(v6, "NoRandomizeLayout");
      goto LABEL_5;
    case 0x117:
LABEL_292:
      sub_995540(v6, "NoReturn");
      goto LABEL_5;
    case 0x118:
LABEL_293:
      sub_995540(v6, "NoSanitize");
      goto LABEL_5;
    case 0x119:
LABEL_294:
      sub_995540(v6, "NoSpecializations");
      goto LABEL_5;
    case 0x11A:
LABEL_295:
      sub_995540(v6, "NoSpeculativeLoadHardening");
      goto LABEL_5;
    case 0x11B:
LABEL_296:
      sub_995540(v6, "NoSplitStack");
      goto LABEL_5;
    case 0x11C:
LABEL_297:
      sub_995540(v6, "NoStackProtector");
      goto LABEL_5;
    case 0x11D:
LABEL_298:
      sub_995540(v6, "NoThreadSafetyAnalysis");
      goto LABEL_5;
    case 0x11E:
LABEL_299:
      sub_995540(v6, "NoThrow");
      goto LABEL_5;
    case 0x11F:
LABEL_300:
      sub_995540(v6, "NoTrivialAutoVarInit");
      goto LABEL_5;
    case 0x120:
LABEL_301:
      sub_995540(v6, "NoUniqueAddress");
      goto LABEL_5;
    case 0x121:
LABEL_302:
      sub_995540(v6, "NoUwtable");
      goto LABEL_5;
    case 0x122:
LABEL_303:
      sub_995540(v6, "NonString");
      goto LABEL_5;
    case 0x123:
LABEL_304:
      sub_995540(v6, "NotTailCalled");
      goto LABEL_5;
    case 0x124:
LABEL_305:
      sub_995540(v6, "OMPAllocateDecl");
      goto LABEL_5;
    case 0x125:
LABEL_306:
      sub_995540(v6, "OMPAssume");
      goto LABEL_5;
    case 0x126:
LABEL_307:
      sub_995540(v6, "OMPCaptureNoInit");
      goto LABEL_5;
    case 0x127:
LABEL_308:
      sub_995540(v6, "OMPDeclareTargetDecl");
      goto LABEL_5;
    case 0x128:
LABEL_309:
      sub_995540(v6, "OMPDeclareVariant");
      goto LABEL_5;
    case 0x129:
LABEL_310:
      sub_995540(v6, "OMPThreadPrivateDecl");
      goto LABEL_5;
    case 0x12A:
LABEL_311:
      sub_995540(v6, "OSConsumesThis");
      goto LABEL_5;
    case 0x12B:
LABEL_312:
      sub_995540(v6, "OSReturnsNotRetained");
      goto LABEL_5;
    case 0x12C:
LABEL_313:
      sub_995540(v6, "OSReturnsRetained");
      goto LABEL_5;
    case 0x12D:
LABEL_314:
      sub_995540(v6, "OSReturnsRetainedOnNonZero");
      goto LABEL_5;
    case 0x12E:
LABEL_315:
      sub_995540(v6, "OSReturnsRetainedOnZero");
      goto LABEL_5;
    case 0x12F:
LABEL_316:
      sub_995540(v6, "ObjCBridge");
      goto LABEL_5;
    case 0x130:
LABEL_317:
      sub_995540(v6, "ObjCBridgeMutable");
      goto LABEL_5;
    case 0x131:
LABEL_318:
      sub_995540(v6, "ObjCBridgeRelated");
      goto LABEL_5;
    case 0x132:
LABEL_319:
      sub_995540(v6, "ObjCException");
      goto LABEL_5;
    case 0x133:
LABEL_320:
      sub_995540(v6, "ObjCExplicitProtocolImpl");
      goto LABEL_5;
    case 0x134:
LABEL_321:
      sub_995540(v6, "ObjCExternallyRetained");
      goto LABEL_5;
    case 0x135:
LABEL_322:
      sub_995540(v6, "ObjCIndependentClass");
      goto LABEL_5;
    case 0x136:
LABEL_323:
      sub_995540(v6, "ObjCMethodFamily");
      goto LABEL_5;
    case 0x137:
LABEL_324:
      sub_995540(v6, "ObjCNSObject");
      goto LABEL_5;
    case 0x138:
LABEL_325:
      sub_995540(v6, "ObjCPreciseLifetime");
      goto LABEL_5;
    case 0x139:
LABEL_326:
      sub_995540(v6, "ObjCRequiresPropertyDefs");
      goto LABEL_5;
    case 0x13A:
LABEL_327:
      sub_995540(v6, "ObjCRequiresSuper");
      goto LABEL_5;
    case 0x13B:
LABEL_328:
      sub_995540(v6, "ObjCReturnsInnerPointer");
      goto LABEL_5;
    case 0x13C:
LABEL_329:
      sub_995540(v6, "ObjCRootClass");
      goto LABEL_5;
    case 0x13D:
LABEL_330:
      sub_995540(v6, "ObjCSubclassingRestricted");
      goto LABEL_5;
    case 0x13E:
LABEL_331:
      sub_995540(v6, "OpenACCRoutineAnnot");
      goto LABEL_5;
    case 0x13F:
LABEL_332:
      sub_995540(v6, "OpenACCRoutineDecl");
      goto LABEL_5;
    case 0x140:
LABEL_333:
      sub_995540(v6, "OpenCLIntelReqdSubGroupSize");
      goto LABEL_5;
    case 0x141:
LABEL_334:
      sub_995540(v6, "OptimizeNone");
      goto LABEL_5;
    case 0x142:
LABEL_335:
      sub_995540(v6, "Override");
      goto LABEL_5;
    case 0x143:
LABEL_336:
      sub_995540(v6, "Owner");
      goto LABEL_5;
    case 0x144:
LABEL_337:
      sub_995540(v6, "Ownership");
      goto LABEL_5;
    case 0x145:
LABEL_338:
      sub_995540(v6, "Packed");
      goto LABEL_5;
    case 0x146:
LABEL_339:
      sub_995540(v6, "ParamTypestate");
      goto LABEL_5;
    case 0x147:
LABEL_340:
      sub_995540(v6, "PatchableFunctionEntry");
      goto LABEL_5;
    case 0x148:
LABEL_341:
      sub_995540(v6, "Pointer");
      goto LABEL_5;
    case 0x149:
LABEL_342:
      sub_995540(v6, "PragmaClangBSSSection");
      goto LABEL_5;
    case 0x14A:
LABEL_343:
      sub_995540(v6, "PragmaClangDataSection");
      goto LABEL_5;
    case 0x14B:
LABEL_344:
      sub_995540(v6, "PragmaClangRelroSection");
      goto LABEL_5;
    case 0x14C:
LABEL_345:
      sub_995540(v6, "PragmaClangRodataSection");
      goto LABEL_5;
    case 0x14D:
LABEL_346:
      sub_995540(v6, "PragmaClangTextSection");
      goto LABEL_5;
    case 0x14E:
LABEL_347:
      sub_995540(v6, "PreferredName");
      goto LABEL_5;
    case 0x14F:
LABEL_348:
      sub_995540(v6, "PreferredType");
      goto LABEL_5;
    case 0x150:
LABEL_349:
      sub_995540(v6, "PtGuardedBy");
      goto LABEL_5;
    case 0x151:
LABEL_350:
      sub_995540(v6, "PtGuardedVar");
      goto LABEL_5;
    case 0x152:
LABEL_351:
      sub_995540(v6, "Pure");
      goto LABEL_5;
    case 0x153:
LABEL_352:
      sub_995540(v6, "RISCVInterrupt");
      goto LABEL_5;
    case 0x154:
LABEL_353:
      sub_995540(v6, "RandomizeLayout");
      goto LABEL_5;
    case 0x155:
LABEL_354:
      sub_995540(v6, "ReadOnlyPlacement");
      goto LABEL_5;
    case 0x156:
LABEL_355:
      sub_995540(v6, "ReentrantCapability");
      goto LABEL_5;
    case 0x157:
LABEL_356:
      sub_995540(v6, "Reinitializes");
      goto LABEL_5;
    case 0x158:
LABEL_357:
      sub_995540(v6, "ReleaseCapability");
      goto LABEL_5;
    case 0x159:
LABEL_358:
      sub_995540(v6, "Replaceable");
      goto LABEL_5;
    case 0x15A:
LABEL_359:
      sub_995540(v6, "ReqdWorkGroupSize");
      goto LABEL_5;
    case 0x15B:
LABEL_360:
      sub_995540(v6, "RequiresCapability");
      goto LABEL_5;
    case 0x15C:
LABEL_361:
      sub_995540(v6, "Restrict");
      goto LABEL_5;
    case 0x15D:
LABEL_362:
      sub_995540(v6, "Retain");
      goto LABEL_5;
    case 0x15E:
LABEL_363:
      sub_995540(v6, "ReturnTypestate");
      goto LABEL_5;
    case 0x15F:
LABEL_364:
      sub_995540(v6, "ReturnsNonNull");
      goto LABEL_5;
    case 0x160:
LABEL_365:
      sub_995540(v6, "ReturnsTwice");
      goto LABEL_5;
    case 0x161:
LABEL_366:
      sub_995540(v6, "SYCLKernelEntryPoint");
      goto LABEL_5;
    case 0x162:
LABEL_367:
      sub_995540(v6, "SYCLSpecialClass");
      goto LABEL_5;
    case 0x163:
LABEL_368:
      sub_995540(v6, "ScopedLockable");
      goto LABEL_5;
    case 0x164:
LABEL_369:
      sub_995540(v6, "Section");
      goto LABEL_5;
    case 0x165:
LABEL_370:
      sub_995540(v6, "SelectAny");
      goto LABEL_5;
    case 0x166:
LABEL_371:
      sub_995540(v6, "Sentinel");
      goto LABEL_5;
    case 0x167:
LABEL_372:
      sub_995540(v6, "SetTypestate");
      goto LABEL_5;
    case 0x168:
LABEL_373:
      sub_995540(v6, "SpeculativeLoadHardening");
      goto LABEL_5;
    case 0x169:
LABEL_374:
      sub_995540(v6, "StandaloneDebug");
      goto LABEL_5;
    case 0x16A:
LABEL_375:
      sub_995540(v6, "StrictFP");
      goto LABEL_5;
    case 0x16B:
LABEL_376:
      sub_995540(v6, "StrictGuardStackCheck");
      goto LABEL_5;
    case 0x16C:
LABEL_377:
      sub_995540(v6, "SwiftAsync");
      goto LABEL_5;
    case 0x16D:
LABEL_378:
      sub_995540(v6, "SwiftAsyncError");
      goto LABEL_5;
    case 0x16E:
LABEL_379:
      sub_995540(v6, "SwiftAsyncName");
      goto LABEL_5;
    case 0x16F:
LABEL_380:
      sub_995540(v6, "SwiftBridge");
      goto LABEL_5;
    case 0x170:
LABEL_381:
      sub_995540(v6, "SwiftBridgedTypedef");
      goto LABEL_5;
    case 0x171:
LABEL_382:
      sub_995540(v6, "SwiftError");
      goto LABEL_5;
    case 0x172:
LABEL_383:
      sub_995540(v6, "SwiftImportAsNonGeneric");
      goto LABEL_5;
    case 0x173:
LABEL_384:
      sub_995540(v6, "SwiftImportPropertyAsAccessors");
      goto LABEL_5;
    case 0x174:
LABEL_385:
      sub_995540(v6, "SwiftName");
      goto LABEL_5;
    case 0x175:
LABEL_386:
      sub_995540(v6, "SwiftNewType");
      goto LABEL_5;
    case 0x176:
LABEL_387:
      sub_995540(v6, "SwiftPrivate");
      goto LABEL_5;
    case 0x177:
LABEL_388:
      sub_995540(v6, "TLSModel");
      goto LABEL_5;
    case 0x178:
LABEL_389:
      sub_995540(v6, "Target");
      goto LABEL_5;
    case 0x179:
LABEL_390:
      sub_995540(v6, "TargetClones");
      goto LABEL_5;
    case 0x17A:
LABEL_391:
      sub_995540(v6, "TargetVersion");
      goto LABEL_5;
    case 0x17B:
LABEL_392:
      sub_995540(v6, "TestTypestate");
      goto LABEL_5;
    case 0x17C:
LABEL_393:
      sub_995540(v6, "TransparentUnion");
      goto LABEL_5;
    case 0x17D:
LABEL_394:
      sub_995540(v6, "TrivialABI");
      goto LABEL_5;
    case 0x17E:
LABEL_395:
      sub_995540(v6, "TriviallyRelocatable");
      goto LABEL_5;
    case 0x17F:
LABEL_396:
      sub_995540(v6, "TryAcquireCapability");
      goto LABEL_5;
    case 0x180:
LABEL_397:
      sub_995540(v6, "TypeTagForDatatype");
      goto LABEL_5;
    case 0x181:
LABEL_398:
      sub_995540(v6, "TypeVisibility");
      goto LABEL_5;
    case 0x182:
LABEL_399:
      sub_995540(v6, "Unavailable");
      goto LABEL_5;
    case 0x183:
LABEL_400:
      sub_995540(v6, "Uninitialized");
      goto LABEL_5;
    case 0x184:
LABEL_401:
      sub_995540(v6, "UnsafeBufferUsage");
      goto LABEL_5;
    case 0x185:
LABEL_402:
      sub_995540(v6, "Unused");
      goto LABEL_5;
    case 0x186:
LABEL_403:
      sub_995540(v6, "Used");
      goto LABEL_5;
    case 0x187:
LABEL_404:
      sub_995540(v6, "UsingIfExists");
      goto LABEL_5;
    case 0x188:
LABEL_405:
      sub_995540(v6, "Uuid");
      goto LABEL_5;
    case 0x189:
LABEL_406:
      sub_995540(v6, "VTablePointerAuthentication");
      goto LABEL_5;
    case 0x18A:
LABEL_407:
      sub_995540(v6, "VecReturn");
      goto LABEL_5;
    case 0x18B:
LABEL_408:
      sub_995540(v6, "VecTypeHint");
      goto LABEL_5;
    case 0x18C:
LABEL_409:
      sub_995540(v6, "Visibility");
      goto LABEL_5;
    case 0x18D:
LABEL_410:
      sub_995540(v6, "WarnUnused");
      goto LABEL_5;
    case 0x18E:
LABEL_411:
      sub_995540(v6, "WarnUnusedResult");
      goto LABEL_5;
    case 0x18F:
LABEL_412:
      sub_995540(v6, "Weak");
      goto LABEL_5;
    case 0x190:
LABEL_413:
      sub_995540(v6, "WeakImport");
      goto LABEL_5;
    case 0x191:
LABEL_414:
      sub_995540(v6, "WeakRef");
      goto LABEL_5;
    case 0x192:
LABEL_415:
      sub_995540(v6, "WebAssemblyExportName");
      goto LABEL_5;
    case 0x193:
LABEL_416:
      sub_995540(v6, "WebAssemblyImportModule");
      goto LABEL_5;
    case 0x194:
LABEL_417:
      sub_995540(v6, "WebAssemblyImportName");
      goto LABEL_5;
    case 0x195:
LABEL_418:
      sub_995540(v6, "WorkGroupSizeHint");
      goto LABEL_5;
    case 0x196:
LABEL_419:
      sub_995540(v6, "X86ForceAlignArgPointer");
      goto LABEL_5;
    case 0x197:
LABEL_420:
      sub_995540(v6, "XRayInstrument");
      goto LABEL_5;
    case 0x198:
LABEL_421:
      sub_995540(v6, "XRayLogArgs");
      goto LABEL_5;
    case 0x199:
LABEL_422:
      sub_995540(v6, "ZeroCallUsedRegs");
      goto LABEL_5;
    case 0x19A:
LABEL_423:
      sub_995540(v6, "AbiTag");
      goto LABEL_5;
    case 0x19B:
LABEL_424:
      sub_995540(v6, "Alias");
      goto LABEL_5;
    case 0x19C:
LABEL_425:
      sub_995540(v6, "AlignValue");
      goto LABEL_5;
    case 0x19D:
LABEL_426:
      sub_995540(v6, "BuiltinAlias");
      goto LABEL_5;
    case 0x19E:
LABEL_427:
      sub_995540(v6, "CalledOnce");
      goto LABEL_5;
    case 0x19F:
LABEL_428:
      sub_995540(v6, "IFunc");
      goto LABEL_5;
    case 0x1A0:
LABEL_429:
      sub_995540(v6, "InitSeg");
      goto LABEL_5;
    case 0x1A1:
LABEL_430:
      sub_995540(v6, "LoaderUninitialized");
      goto LABEL_5;
    case 0x1A2:
LABEL_431:
      sub_995540(v6, "LoopHint");
      goto LABEL_5;
    case 0x1A3:
LABEL_432:
      sub_995540(v6, "Mode");
      goto LABEL_5;
    case 0x1A4:
LABEL_433:
      sub_995540(v6, "NoBuiltin");
      goto LABEL_5;
    case 0x1A5:
LABEL_434:
      sub_995540(v6, "NoEscape");
      goto LABEL_5;
    case 0x1A6:
LABEL_435:
      sub_995540(v6, "OMPCaptureKind");
      goto LABEL_5;
    case 0x1A7:
LABEL_436:
      sub_995540(v6, "OMPDeclareSimdDecl");
      goto LABEL_5;
    case 0x1A8:
LABEL_437:
      sub_995540(v6, "OMPReferencedVar");
      goto LABEL_5;
    case 0x1A9:
LABEL_438:
      sub_995540(v6, "ObjCBoxable");
      goto LABEL_5;
    case 0x1AA:
LABEL_439:
      sub_995540(v6, "ObjCClassStub");
      goto LABEL_5;
    case 0x1AB:
LABEL_440:
      sub_995540(v6, "ObjCDesignatedInitializer");
      goto LABEL_5;
    case 0x1AC:
LABEL_441:
      sub_995540(v6, "ObjCDirect");
      goto LABEL_5;
    case 0x1AD:
LABEL_442:
      sub_995540(v6, "ObjCDirectMembers");
      goto LABEL_5;
    case 0x1AE:
LABEL_443:
      sub_995540(v6, "ObjCNonLazyClass");
      goto LABEL_5;
    case 0x1AF:
LABEL_444:
      sub_995540(v6, "ObjCNonRuntimeProtocol");
      goto LABEL_5;
    case 0x1B0:
LABEL_445:
      sub_995540(v6, "ObjCRuntimeName");
      goto LABEL_5;
    case 0x1B1:
LABEL_446:
      sub_995540(v6, "ObjCRuntimeVisible");
      goto LABEL_5;
    case 0x1B2:
LABEL_447:
      sub_995540(v6, "OpenCLAccess");
      goto LABEL_5;
    case 0x1B3:
LABEL_448:
      sub_995540(v6, "Overloadable");
      goto LABEL_5;
    case 0x1B4:
LABEL_449:
      sub_995540(v6, "RootSignature");
      goto LABEL_5;
    case 0x1B5:
LABEL_450:
      sub_995540(v6, "SwiftNullability");
      goto LABEL_5;
    case 0x1B6:
LABEL_451:
      sub_995540(v6, "SwiftObjCMembers");
      goto LABEL_5;
    case 0x1B7:
LABEL_452:
      sub_995540(v6, "SwiftType");
      goto LABEL_5;
    case 0x1B8:
LABEL_453:
      sub_995540(v6, "SwiftVersionedAddition");
      goto LABEL_5;
    case 0x1B9:
LABEL_4:
      sub_995540(v6, "SwiftVersionedRemoval");
      goto LABEL_5;
    case 0x1BA:
LABEL_12:
      sub_995540(v6, "Thread");
LABEL_5:
      sub_995540(*(_QWORD *)(a1 + 1096), "Attr");
      if ( v4 )
LABEL_6:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      break;
    default:
      sub_995540(v5, "Attr");
      break;
  }
  sub_F29AE0(a1, a2);
  sub_F2A050(a1, *(_QWORD *)(a2 + 24));
  v7 = *(_BYTE *)(a2 + 38);
  if ( (v7 & 1) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " Inherited");
    v7 = *(_BYTE *)(a2 + 38);
  }
  if ( (v7 & 4) != 0 )
    sub_995540(*(_QWORD *)(a1 + 1096), " Implicit");
  sub_F52870(a1, a2, a3);
}
